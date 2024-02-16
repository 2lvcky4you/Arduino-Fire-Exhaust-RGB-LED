#include <Arduino.h>

int PWM1 = 3;
int red = 9;
int green = 10;
int blue = 11;
int PWM_default;
int pwmNow;
int offset = 100;
int i = 0;

void setup() {

  //Serial.begin(9200);

  pinMode(PWM1, INPUT); //Signal Empfänger

  PWM_default = 1500;//pulseIn(PWM1, HIGH); // start PWM (0 Punkt)
  
}
void loop() {

  pwmNow = pulseIn(PWM1, HIGH); // read PWM
  if (pwmNow > PWM_default + offset)
  {
    delay(100); // mal rausnehmen und testen
    pwmNow = pulseIn(PWM1, HIGH); // read PWM
    if (pwmNow <= PWM_default + offset){
      i = 2;//random(3);
      if (i == 0)
      {
        analogWrite(red, 255);
        analogWrite(green, 255);
        analogWrite(blue, 255);
        delay(40);
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0);

        delay(180);
        
        analogWrite(red, 255);
        analogWrite(green, 80);
        analogWrite(blue, 0);
        delay(40);
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0);
        
        delay(100);

        analogWrite(red, 255);
        analogWrite(green, 0);
        analogWrite(blue, 0);
        delay(40);
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0);
      }
      else if (i == 1)
      {
        analogWrite(red, 255);
        analogWrite(green, 255);
        analogWrite(blue, 255);
        delay(40);
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0);

        delay(180);

        analogWrite(red, 255);
        analogWrite(green, 0);
        analogWrite(blue, 0);
        delay(40);
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0);
      }
      else if (i == 2)
      {

        analogWrite(red, 255);
        analogWrite(green, 255);
        analogWrite(blue, 255);
        delay(40);
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0);

        delay(180);

        analogWrite(red, 255);
        analogWrite(green, 70);
        analogWrite(blue, 0);
        delay(40);
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0);

        delay(60);
        
        analogWrite(red, 255);
        analogWrite(green, 30);
        analogWrite(blue, 0);
        delay(40);
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0);

        delay(60);

        analogWrite(red, 255);
        analogWrite(green, 0);
        analogWrite(blue, 0);
        delay(40);
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0);
      }
    }
  }
}
