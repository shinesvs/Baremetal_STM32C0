#include "gpio.h" 
typedef struct
{
   volatile uint32_t MODER;       /*!< GPIO port mode register,               Address offset: 0x00      */
   volatile uint32_t OTYPER;      /*!< GPIO port output type register,        Address offset: 0x04      */
   volatile uint32_t OSPEEDR;     /*!< GPIO port output speed register,       Address offset: 0x08      */
   volatile uint32_t PUPDR;       /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
   volatile uint32_t IDR;         /*!< GPIO port input data register,         Address offset: 0x10      */
   volatile uint32_t ODR;         /*!< GPIO port output data register,        Address offset: 0x14      */
   volatile uint32_t BSRR;        /*!< GPIO port bit set/reset  register,     Address offset: 0x18      */
   volatile uint32_t LCKR;        /*!< GPIO port configuration lock register, Address offset: 0x1C      */
   volatile uint32_t AFR[2];      /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
   volatile uint32_t BRR;         /*!< GPIO Bit Reset register,               Address offset: 0x28      */
} GPIO_TypeDef;



void gpio_set_mode(uint16_t pin, uint8_t mode) {
  GPIO_TypeDef *gpio = GPIO(PINBANK(pin)); // GPIO bank
  uint8_t n = PINNO(pin);                 // Pin number
  gpio->MODER &= ~(3U << (n * 2));        // Clear existing setting
  gpio->MODER |= (mode & 3) << (n * 2);   // Set new mode
}

void gpio_write(uint16_t pin, bool val) {
  GPIO_TypeDef *gpio = GPIO(PINBANK(pin));
  gpio->BSRR = (1U << PINNO(pin)) << (val ? 0 : 16);
}