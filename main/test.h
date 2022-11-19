#include"user_main.h"

static const char *TEST = "test";

void unitTestStatus(){
    gpio_set_level(GPIO_OUTPUT_IO,1);           //Manually setting GPIO high
    ESP_LOGI(TEST,"GPIO set High\n");
    gpio_level(NULL);                           //Calling status function to check for GPIO high

}