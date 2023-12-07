#include "pico/stdlib.h"

int main(){

    const int LED_GPIO = 25;

    //Init GPIO
    gpio_init(LED_GPIO);

    gpio_set_dir(LED_GPIO, GPIO_OUT);

    while (1)
    {
        gpio_put(LED_GPIO, 1);

        sleep_ms(5000);

        gpio_put(LED_GPIO, 0);

        sleep_ms(5000);
    }
    
}