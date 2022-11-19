#include"user_main.h"

static const char *TEST = "test";

void driver(){

    gpio_ON(NULL);                              //Running gpio on function
    gpio_level(NULL);                           //Calling level function
    gpio_OFF(NULL);                             //Running function set gpio low
    gpio_level(NULL);                           //Calling level function

}

void integrationTestStatus(){
    
    ESP_LOGI(TEST,"Integration Test.\nPulling GPIO high then low");
    while(1){
        driver();
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}