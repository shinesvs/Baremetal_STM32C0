#include "rcc.h"
#include "stm32c031xx.h"

void rcc_enable_gpioa(){
    RCC->IOPENR |= _VAL2FLD(RCC_IOPENR_GPIOAEN, 1U);
    
    (void) RCC->IOPENR;
}