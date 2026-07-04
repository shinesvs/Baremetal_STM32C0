#include <stdint.h>

#include "rcc.h"
#include "gpio.h"
#include "stm32c031xx.h"

int main(void) {
    rcc_enable_gpioa();
    gpio_set_mode(GPIOA, 5U, GPIO_MODE_OUTPUT);
    gpio_write(GPIOA, 5U, true);
}

