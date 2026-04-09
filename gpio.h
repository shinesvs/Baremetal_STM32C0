#ifndef GPIO_H
#define GPIO_H

#include "HAL.h"

static inline void gpio_set_mode(uint16_t pin, uint8_t mode);
static inline void gpio_write(uint16_t pin, bool val);

#endif GPIO_H
