/*
Keyestudio smart home Kit for Arduino
Project 12
1602 LCD
http://www.keyestudio.com
 */
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27 for a16 chars and 2 line display
void setup ()
{
lcd.init (); // initialize the lcd
lcd.backlight ();
lcd.print ("Russkiy Korabl"); // LED print hello, world!
lcd.setCursor (2,1);
lcd.print ("Poshel nahuy!"); // LED print keyestudio!
}
void loop ()
{
}
