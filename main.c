// #define GPIOA(bank) ((struct gpio *) (0x50000000 + 400*(bank)))
// #define PIN(bank, num) ((((bank) - 'A') << 8) | (num))
// #define PINNO(pin) (pin & 255)
// #define PINBANK(pin) (pin >> 8)


// struct gpio {
//   volatile uint32_t MODER, OTYPER, OSPEEDR, PUPDR, IDR, ODR, BSRR, LCKR, AFRL, AFRH, BRR;
// };


// static inline void gpio_set_mode(uint16_t pin, uint8_t mode) {
//   struct gpio *gpio = GPIO(PINBANK(pin)); // GPIO bank
//   uint8_t n = PINNO(pin);                 // Pin number
//   gpio->MODER &= ~(3U << (n * 2));        // Clear existing setting
//   gpio->MODER |= (mode & 3) << (n * 2);   // Set new mode
// }
						    
// uint16_t pin = PIN('A', 3);            // Pin A3
// gpio_set_mode(pin, GPIO_MODE_OUTPUT);  // Set to output


__attribute__((naked, noreturn)) void _reset(void) {
  // memset .bss to zero, and copy .data section to RAM region
  extern long _sbss, _ebss, _sdata, _edata, _sidata;
  for (long *dst = &_sbss; dst < &_ebss; dst++) *dst = 0;
  for (long *dst = &_sdata, *src = &_sidata; dst < &_edata;) *dst++ = *src++;

  main();             // Call main()
  for (;;) (void) 0;  // Infinite loop in the case if main() returns
}

extern void _estack(void);  // Defined in link.ld

// 16 standard and 32 STM32-specific IRQ handlers
__attribute__((section(".vectors"))) void (*const tab[16 + 32])(void) = {
  _estack, _reset
};

int main(void) {
  return 0; // Do nothing so far
}

