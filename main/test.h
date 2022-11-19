#include"user_main.h"

static const char *TEST = "test";


void verificationTestStatus(){
    
    ESP_LOGI(TEST,"Verification test with round robin scheduling.\n");
    xTaskCreate(gpio_ON,"gpio_ON",2048,NULL,1,NULL);                //Creating tasks with set priorities
    xTaskCreate(gpio_level,"gpio_level", 2048,NULL,1,NULL);
    xTaskCreate(gpio_OFF,"gpio_OFF",2048,NULL,1,NULL);
    
}