
#define BIT(x) (1UL << (x))
#define GPIO(bank) ((struct gpio *) (0x50000000 + 400*(bank)))
#define PIN(bank, num) ((((bank) - 'A') << 8) | (num))
#define PINNO(pin) (pin & 255)
#define PINBANK(pin) (pin >> 8)


static inline void gpio_set_mode(uint16_t pin, uint8_t mode) {
   struct gpio *gpio = GPIO(PINBANK(pin)); // GPIO bank
   uint8_t n = PINNO(pin);                 //Pin Number
   gpio->MODER &= ~(3U << (n * 2));        // Clear existing setting
   gpio->MODER |= (mode & 3) << (n * 2);   // Set new mode
 }

static inline void gpio_write(uint16_t pin, bool val) {
  struct gpio *gpio = GPIO(PINBANK(pin));
  //gpio->BSRR = (1U << PINNO(pin)) << (val ? 0 : 16);
}
