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
	lcd_i2c_write_string("sin embargo ella");
	lcd_i2c_col_row(1,2);
	lcd_i2c_write_string(" salto enojada");
	lcd_i2c_clr();
	lcd_i2c_cmd(0x81);
	lcd_i2c_write_string(" DANCING");
    while (1) 
    {
	lcd_i2c_move_C();
    }
		}