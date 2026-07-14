#include "led.h"
#include "gpio.h"
#include "rcc.h"
#include <stdint.h>

static void lcd_delay(void){
    volatile uint32_t count = 16000U;

    while (count--) {
        __asm volatile ("nop");
    }
}

void led_command_mode(){
    gpio_set_mode(GPIOA, 15U, GPIO_MODE_OUTPUT);
    gpio_write(GPIOA, 15U, false);
}

void led_data_mode(){
    gpio_set_mode(GPIOA, 15U, GPIO_MODE_OUTPUT);
    gpio_write(GPIOA, 15U, true);
}

void lcd_write_4bits(uint8_t nibble){
    

}




void lcd_init(void)
{
    // 1. Wait after LCD power-up
    for (uint8_t i = 0; i < 20U; i++) {
        lcd_delay();
    }

    // 2. Make sure RS = 0 because these are commands
    lcd_command_mode();

    // 3. Special 4-bit initialization sequence
    lcd_write_4bits(0x03);
    lcd_delay();

    lcd_write_4bits(0x03);
    lcd_delay();

    lcd_write_4bits(0x03);
    lcd_delay();

    lcd_write_4bits(0x02);   // switch to 4-bit mode
    lcd_delay();

    // 4. Now send normal full-byte commands
    lcd_send_command(0x28);   // 4-bit, 2-line, 5x8 font
    lcd_delay();

    lcd_send_command(0x0C);   // display ON, cursor OFF
    lcd_delay();

    lcd_send_command(0x06);   // cursor moves right
    lcd_delay();

    lcd_send_command(0x01);   // clear display
    lcd_delay();
}