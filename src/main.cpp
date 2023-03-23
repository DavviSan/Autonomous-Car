#include <Arduino.h>
#include <DCMotor.hpp>

DCMotor Motor1, Motor2;

void setup() {
  Motor1.begin(5, 6);
  Motor2.begin(9, 10); 
}

void loop() {

} 