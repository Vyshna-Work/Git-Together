#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  Serial.println("Enter two numbers separated by space or newline:");
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
void loop() {
  if (Serial.available()) {
    int num1 = Serial.parseInt();
    int num2 = Serial.parseInt();
    Serial.print("Sum: ");
    Serial.println(num1 + num2);
  }
}