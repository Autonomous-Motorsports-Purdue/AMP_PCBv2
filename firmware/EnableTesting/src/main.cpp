#include <Arduino.h>

#define FS1 2
#define FWD 3
#define REV 4

#define STR 7
#define THR 10

void set_idle()
{
    digitalWrite(FS1, LOW);
    //    digitalWrite(KS1, LOW);
    digitalWrite(FWD, LOW);
    digitalWrite(REV, LOW);
}

void set_enabled()
{
    digitalWrite(FS1, HIGH);
    delay(1000);
    digitalWrite(REV, LOW);
    //    digitalWrite(KS1, HIGH);
    digitalWrite(FWD, HIGH);
}


void setup() {
  Serial.begin(9600);
  pinMode(FS1, OUTPUT);
  pinMode(FWD, OUTPUT);
  pinMode(REV, OUTPUT);
  pinMode(STR, OUTPUT);
  pinMode(THR, OUTPUT);

  set_idle();
  Serial.println("idle");
  delay(2000);
  set_enabled();
  Serial.println("enabled");
  delay(2000);
}

void loop() {
  // loops through steering values and for every complete loop
  // it will iterate the throttle value by 10:
  for(int j = 0; j < 256; j+=20)
  {
      analogWrite(THR, j);
      delay(2000);
      Serial.println(j);
    // for(int i = 1000; i <= 5000; i+= 100)
    // {
    //   tone(STR, i); //   pin, freq
    // }
  }
}