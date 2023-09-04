#include <ESP32Servo.h>

Servo myServo;

void setup() {
  myServo.attach(12);
}

void loop() {
  for (int i=0; i<=180; i++) {
    myServo.write(i);
    delay(15);
  }
  delay(1000);

  for (int i = 180; i>=0; i--) {
    myServo.write(i);
    delay(15);
  }
  delay(1000);
}
