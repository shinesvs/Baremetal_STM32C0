#include <stdint.h>
#include <stdbool.h>
#include "rcc.h"
#include "gpio.h"
#include "stm32c031xx.h"

int main(void) {
    rcc_enable_gpioa();
    rcc_enable_gpiob();
    rcc_enable_gpioc();


    
}

