#ifndef LCD_H
#define LCD_H

static void lcd_delay();
void led_command_mode();
void led_data_mode();
void led_init();
void lcd_write_4bits(uint8_t nibble);



#endif