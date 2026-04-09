
#include "HAL.H"

static inline void gpio_set_mode(uint16_t pin, uint8_t mode) {
   RCC->IOPENR |= (1U << PINBANK(pin));
   struct gpio *gpio = GPIO(PINBANK(pin)); // GPIO bank
   uint8_t n = PINNO(pin);                 //Pin Number
   gpio->MODER &= ~(3U << (n * 2));        // Clear existing setting
   gpio->MODER |= (mode & 3) << (n * 2);   // Set new mode
 }

static inline void gpio_write(uint16_t pin, bool val) {
  struct gpio *gpio = GPIO(PINBANK(pin));
  //gpio->BSRR = (1U << PINNO(pin)) << (val ? 0 : 16);
}
