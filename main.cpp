#include <Arduino.h>

int PWM1 = 3;
int red = 9;
int green = 10;
int blue = 11;
int PWM1_default;
int i = 0;

void setup() {

  Serial.begin(9200);

  pinMode(PWM1, INPUT); //Signal Empfänger
  //pinMode(red, OUTPUT); //LED-Auspuff
  //pinMode(green, OUTPUT); //LED-Auspuff
  //pinMode(blue, OUTPUT); //LED-Auspuff

  PWM1_default = pulseIn(PWM1, HIGH); // start PWM (0 Punkt)
  
}
void loop() {

  int pwm1 = pulseIn(PWM1, HIGH); // read PWM
  if (pwm1 > PWM1_default + 100)
  {
    delay(400);
    int pwm1 = pulseIn(PWM1, HIGH); // read PWM
    if (pwm1 < PWM1_default + 20){
      i = random(3);
      if (i == 0)
      {
        analogWrite(red, 255);
        analogWrite(green, 255);
        analogWrite(blue, 255);
        delay(40);
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0);

        delay(300);
        
        analogWrite(red, 255);
        analogWrite(green, 80);
        analogWrite(blue, 0);
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

        //i++;
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

        delay(300);

        analogWrite(red, 255);
        analogWrite(green, 0);
        analogWrite(blue, 0);
        delay(40);
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0);
        //i++;
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

        delay(300);

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
        //i = 0;
      }
    }
  }
}
