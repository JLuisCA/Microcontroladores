/*
 * Actividad 2.c
 *
 * Created: 15/03/2024 10:08:00 p. m.
 * Author : DoniMaki
 */ 

#include <avr/io.h>
#include "ports.h"
#include "leds.h"
#include "i2c.h"
#include "lcd_i2c.h"

int main(void)
{
    /* Replace with your application code */
	init_ports();
	init_i2c();
	lcd_i2c_init();
	lcd_i2c_clr();
	lcd_i2c_col_row(1,1);
	lcd_i2c_write_string(" Hoy monita se de");
	lcd_i2c_col_row(1,2);
	lcd_i2c_write_string("sperto contenta ");
	lcd_i2c_cmd(0x17); 
	lcd_i2c_col_row(1,1);
	lcd_i2c_write_string("lo cual disfruta");
	lcd_i2c_col_row(1,2);
	lcd_i2c_write_string("de pan con agua");
	lcd_i2c_col_row(1,1);
	lcd_i2c_write_string("sin embargo ell");
	lcd_i2c_col_row(1,2);
	lcd_i2c_write_string("a salto enojada");
	lcd_i2c_clr();
	lcd_i2c_write_string(" CARGANDO...");
		char i;
		
		unsigned char Character1[8] = {0x0D,0x0D,0x05,0x1F,0x1A,0x1E,0x0A,0x11};  /* Custom char set for alphanumeric LCD Module */
		unsigned char Character2[8] = {0x0E,0x0E,0x04,0x1F,0x15,0x15,0x0A,0x11};
		unsigned char Character3[8] = { 0x06,0x16,0x14,0x1F,0x05,0x05,0x0A,0x11 };
		unsigned char Character4[8] = {  0x0E,0x0E,0x04,0x1F,0x15,0x04,0x0A,0x11 };

		lcd_i2c_init();
		
		
		LCD_custom_char(0, Character1);  /* Build Character1 at position 0 */
		LCD_custom_char(1, Character2);  /* Build Character2 at position 1 */
		LCD_custom_char(2, Character3);  /* Build Character3 at position 2 */
		LCD_custom_char(3, Character4);  /* Build Character4 at position 3 */

		LCD_Command(0x80);		/*cursor at home position */
		lcd_i2c_write_string("LOADING...");
		LCD_Command(0xc0);
		
		for(i=0;i<8;i++)		/* function will send data 1 to 8 to lcd */
		{
			lcd_char(i);		/* char at 'i'th position will display on lcd */
			lcd_char(' ');		/* space between each custom char. */
	
    while (1) 
    {
    }
		}
		}