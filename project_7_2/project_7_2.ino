#include <Servo.h>

Servo servo;  // Создаем объект
void setup() {
  servo.attach(9);   // Указываем объекту класса Servo, что серво присоединен к пину 9
  servo1.write(0);   // Выставляем начальное положение 
  }

void loop() {
  servo.write(90); // Поворачиваем серво на 90 градусов
  delay(1000);        
  servo.write(1800);
  delay(100);        
  servo.write(90);
  delay(1000);
  servo.write(0);
  delay(1000);        
}
