
#include "gpio.h"


int main(void) {
  uint16_t led = PIN('A', 5); 
  gpio_set_mode( led, GPIO_MODE_OUTPUT);
  gpio_write(led, true);
  return 0; // Do nothing so far
}

