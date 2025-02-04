
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

void task1(void *params){

    while(1){
        //printf("Reading something...\n");
        ESP_LOGI("TASK1", "Reading something");
        vTaskDelay( 1000 / portTICK_PERIOD_MS) ;

    }
}

void task2 (void * params){

    while(1){
        ESP_LOGI("TASK2",   "DISPLAY");
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}

void app_main(void)
{
   xTaskCreate(&task1, "read", 2048, "Task 1", 1, NULL);
   xTaskCreate(&task2, "display", 2048, "Task 2", 1, NULL);
    
}