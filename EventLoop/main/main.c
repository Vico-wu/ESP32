#include <stdio.h>
#include "esp_event.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include <string.h>

esp_event_loop_handle_t night_market_loop_handler;

esp_event_base_t XINJIANG_BASE = "新疆餐厅";

typedef enum {
    Kebab_Spicy = 0,
    Kebab_NotSpicy,
    HotBuns,
    BakedBuns,
    ThinSkinBuns,
    ColdBeer
} bbq_event_t;

void consumer_event_handle(void *handler_arg, esp_event_base_t base, int32_t id, void *event_data)
{   char * msg_from_booth = (char*) event_data;
    char * msg_from_consumer = (char*) handler_arg;
    ESP_LOGE("EVENT_HANDLE", "顾客:%s 摊位:%s, 事件:%d, 老板说:%s", msg_from_consumer, base, id,msg_from_booth);

}

void consumer_add_task(void *pt)
{
    ESP_LOGE("CONSUMER_TASK", "来了一个吃货");
    char * handle_arg = "我是个大胃王,爱吃辣";
    esp_event_handler_register_with(night_market_loop_handler, XINJIANG_BASE, Kebab_Spicy, consumer_event_handle, handle_arg);
    esp_event_handler_register_with(night_market_loop_handler, XINJIANG_BASE, ColdBeer, consumer_event_handle, handle_arg);
    while(1) {
        vTaskDelay(1000/portTICK_PERIOD_MS);
    }
}

void booth_xinjiang_task(void *pt)
{
    ESP_LOGE("BOOTH_TASK", "新疆饭店开张了");
    while(1) {
        vTaskDelay(5000/portTICK_PERIOD_MS);
        char * event_data = "这次肥肉比较多,不好意思哦";
        ESP_LOGE("新疆饭店", "烤包子好了");
        esp_event_post_to(night_market_loop_handler, XINJIANG_BASE, BakedBuns, event_data,strlen(event_data)+1, portMAX_DELAY);

        vTaskDelay(5000/portTICK_PERIOD_MS);
        ESP_LOGE("新疆饭店", "羊肉串_辣");
        event_data = "变态辣, 吃进医院不负责哦";
        esp_event_post_to(night_market_loop_handler, XINJIANG_BASE, Kebab_Spicy, event_data,strlen(event_data)+1, portMAX_DELAY);

        vTaskDelay(5000/portTICK_PERIOD_MS);
        ESP_LOGE("新疆饭店", "羊肉串_不辣");
        event_data = "一点辣味都没有,这有啥吃的呀";
        esp_event_post_to(night_market_loop_handler, XINJIANG_BASE, Kebab_NotSpicy, event_data,strlen(event_data)+1, portMAX_DELAY);

        vTaskDelay(5000/portTICK_PERIOD_MS);
        ESP_LOGE("新疆饭店", "冰冻啤酒");
        event_data = "超级冰, 都是冰渣子, 牙齿给你冻掉";
        esp_event_post_to(night_market_loop_handler, XINJIANG_BASE, ColdBeer, event_data,strlen(event_data)+1, portMAX_DELAY);

        ESP_LOGE("新疆饭店", "新年提前收工了, 明年见");
        vTaskDelete(NULL);
    }
}

void app_main(void)
{   
    /*
    课程开始前，我们先回顾一下
    char_pointer - 指针指向的地址
    %char_pointer - 指针自己的地址
    sizeof(char_pointer) - 指针本身的大小
    strlen(char_pointer) - 指针指向的char数组的大小,不包括最后的NULL
    strlen(char_pointer)+1 - 指针指向的char数组的大小,包括最后的NULL
    */
    char * char_pointer = "1234567890";
    ESP_LOGI("main","char_pointer 内容: %s",char_pointer);
    ESP_LOGI("main","char_pointer %p",char_pointer);
    ESP_LOGI("main","&char_pointer %p",&char_pointer);
    ESP_LOGI("main","sizeof(char_pointer) %d",sizeof(char_pointer));
    ESP_LOGI("main","strlen(char_pointer) %d",strlen(char_pointer));

    
    ESP_LOGE("MAIN","创建 Event Loop");
    esp_event_loop_args_t night_market_loop_args = {
        .queue_size = 5,
        .task_name = "night_market_task",
        .task_priority = uxTaskPriorityGet(NULL),
        .task_stack_size = 1024*4,
        .task_core_id = tskNO_AFFINITY,
    };
    
    ESP_ERROR_CHECK(esp_event_loop_create(&night_market_loop_args, &night_market_loop_handler));

    xTaskCreate(consumer_add_task, "consumer a", 1024 * 12, NULL, 1, NULL);
    xTaskCreate(booth_xinjiang_task, "xinjiang bbq", 1024 * 12, NULL, 1, NULL);

    
    vTaskDelete(NULL);
}