/*
Keyestudio smart home Kit for Arduino
Project 12
1602 LCD
http://www.keyestudio.com
*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27,16,2); // set the LCD address to 0x27 for a16 chars and 2 line display
void setup ()
{
lcd.begin(); 
lcd.backlight();
lcd.setCursor (3,0);
lcd.print ("Hello, world!"); // LED print hello, world!
lcd.setCursor (2,1);
lcd.print ("keyestudio!"); // LED print keyestudio!
}
void loop ()
{
}
/*

Keyestudio smart home Kit for Arduino
Project 12
1602 LCD
http://www.keyestudio.com

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27,16,2); // set the LCD address to 0x27 for a16 chars and 2 line display
void setup ()
{
lcd.init (); // initialize the lcd
lcd.init (); // Print a message to the LCD.
lcd.backlight ();
lcd.setCursor (3,0);
lcd.print ("Hello, world!"); // LED print hello, world!
lcd.setCursor (2,1);
lcd.print ("keyestudio!"); // LED print keyestudio!
}
void loop ()
{
}
*/
/*
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  // initialize the LCD
  lcd.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.print("Hello, world!");
}

void loop()
{
  // Do nothing here...
}
