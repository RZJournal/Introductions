#include 

int stepsPerRevolution = 2048;
#define IN1 19
#define IN2 18
#define IN3 5
#define IN4 17
Stepper myStepper(stepsPerRevolution, IN1, IN3, IN2, IN4);

void setup() {
  myStepper.setSpeed(5);
}

void loop() {
  myStepper.step(stepsPerRevolution);
  delay(1000);

  myStepper.step(-stepsPerRevolution);
  delay(1000);
}
