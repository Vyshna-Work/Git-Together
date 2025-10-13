#include <Arduino.h>


int sum(int a, int b){
  return a+b;
}
void setup(){
  Serial.begin(9600);
}

void loop(){
  int a, b;

  a = Serial.parseInt();
  b = Serial.parseInt(); 
  Serial.println(sum(a,b));
}