#include <Arduino.h>
int LED = 12;
void setup() 
{
  Serial.begin(9600);  
  Serial.begin(9600);
  pinMode(LED, OUTPUT);                                  // Start serial communication
}

void blink(int LED){
    digitalWrite(LED,HIGH);
    delay(600);
    digitalWrite(LED, LOW);
}

void sum()
{
  if (Serial.available()) {
    int num1 = Serial.parseInt();
    int num2 = Serial.parseInt();
    Serial.print("Sum: ");
    Serial.println(num1 + num2);
  }
}

void loop(){
  sum();
  blink(LED);
}