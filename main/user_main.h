#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "freertos/semphr.h"

#include "driver/gpio.h"
#include "esp_log.h"
#include "esp_system.h"



#define GPIO_OUTPUT_IO      2                   //Define output pin

static void wait_for_ms (uint32_t delay);        //Waiting Function
static void gpio_level(void *arg);               //GPIO task to report pin leve
static void gpio_ON(void*arg);                   //GPIO task to pull pin high
static void gpio_OFF(void*arg);                  //GPIO task to pull pin low
