struct gpio {
  volatile uint32_t MODER, OTYPER, OSPEEDR, PUPDR, IDR, ODR, BSRR, LCKR, AFRL, AFRH, BRR;
};

#define GPIOA ((struct gpio *) 0x50000000)



static inline void gpio_set_mode(struct gpio *gpio, uint8_t pin, uint8_t mode) {
      gpio->MODER &= ~(3U << (pin * 2)); //clear existing mode
      gpio->MODER |= (mode & 3) << (pin * 2); //set new mode
      }

						    
