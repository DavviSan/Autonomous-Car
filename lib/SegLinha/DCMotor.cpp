#include "DCMotor.hpp"


void DCMotor::begin(int in1, int in2){ 
  pin1 = in1;
  pin2 = in2;
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}   


void DCMotor::Speed(int Velocidade){
  Velocidade = map(Velocidade, 0, 100, 0, 255);
}


void DCMotor::Forward(){
  analogWrite(pin1, Velocidade);
  digitalWrite(pin2, LOW); 
}


void DCMotor::Backward(){
  digitalWrite(pin1, LOW);
  analogWrite(pin2, Velocidade);
}


void DCMotor::Stop(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
}