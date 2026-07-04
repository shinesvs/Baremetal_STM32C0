#include <stdint.h>


#include "gpio.h"


void gpio_set_mode(GPIO_TypeDef *port, uint8_t pin, gpio_mode_t mode)
{
    port->MODER |= (mode << (pin*2U));
}

void gpio_write(GPIO_TypeDef *port, uint8_t pin, bool state){
    if(state)
    port -> BSRR = ( 1 << pin);
    else 
    port->BSRR = (1U << (pin + 16U));

}

