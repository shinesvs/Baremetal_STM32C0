#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>
#include <stdbool.h>
#include "stm32c031xx.h"

typedef enum
{
    GPIO_MODE_INPUT  = 0U,
    GPIO_MODE_OUTPUT = 1U,
    GPIO_MODE_AF     = 2U,
    GPIO_MODE_ANALOG = 3U
} gpio_mode_t;

void gpio_set_mode(GPIO_TypeDef *port, uint8_t pin, gpio_mode_t mode);
void gpio_write(GPIO_TypeDef *port, uint8_t pin, bool state);



#endif
