#include "rcc.h"
#include "stm32c031xx.h"

void rcc_enable_gpioa(){
    RCC->IOPENR |= _VAL2FLD(RCC_IOPENR_GPIOAEN, 1U);
    
    (void) RCC->IOPENR;
}

void rcc_enable_gpiob(){
    RCC->IOPENR |= _VAL2FLD(RCC_IOPENR_GPIOBEN, 1U);
    
    (void) RCC->IOPENR;
}

void rcc_enable_gpioc(){
    RCC->IOPENR |= _VAL2FLD(RCC_IOPENR_GPIOCEN, 1U);
    
    (void) RCC->IOPENR;
}