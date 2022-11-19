#include "user_main.h"
#include "test.h"

static const char *TAG = "main";



static void wait_for_ms (uint32_t delay)        //Waiting Function
{
    uint32_t duration = delay/portTICK_RATE_MS;
    uint32_t begin = xTaskGetTickCount();
    uint32_t current = xTaskGetTickCount();

    while((current-begin)<duration){
        current = xTaskGetTickCount();
    }
    
}

static void gpio_level(void *arg)               //GPIO task to report pin level
{
    

    while(1) {
        ESP_LOGI(TAG, "GPIO Level: %d\n",gpio_get_level(GPIO_OUTPUT_IO));
        vTaskDelay(1000/portTICK_PERIOD_MS);
    }
}

static void gpio_ON(void*arg)                   //GPIO task to pull pin high
{
    while(1)
    {
        ESP_LOGI(TAG,"Trying high");
        gpio_set_level(GPIO_OUTPUT_IO,1);
        ESP_LOGI(TAG,"GPIO set High\n");
        wait_for_ms(500);
        vTaskDelay(1000/ portTICK_PERIOD_MS);
    }
}

static void gpio_OFF(void*arg)              //GPIO task to pull pin low
{
    while(1)
    {
        ESP_LOGI(TAG,"Trying low");
        gpio_set_level(GPIO_OUTPUT_IO,0);
        ESP_LOGI(TAG,"GPIO set Low\n");
        wait_for_ms(500);
        vTaskDelay(1000/ portTICK_PERIOD_MS);
    }
}

void app_main(void)
{
    gpio_config_t io_conf;
    //disable interrupt
    io_conf.intr_type = GPIO_INTR_DISABLE;
    //set as output mode
    io_conf.mode = GPIO_MODE_OUTPUT;
    //bit mask of the pins that you want to set,e.g.GPIO15/16
    io_conf.pin_bit_mask = (1ULL << GPIO_OUTPUT_IO);
    //disable pull-down mode
    io_conf.pull_down_en = 0;
    //disable pull-up mode
    io_conf.pull_up_en = 0;
    //configure GPIO with the given settings
    gpio_config(&io_conf);


    while (1) {

        unitTestStatus();                           //Unit test function from test.h
        vTaskDelay(1000 / portTICK_PERIOD_MS);      

    }
}


