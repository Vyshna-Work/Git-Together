#include <Arduino.h>
int LED = 12;
void setup() 
{
  Serial.begin(9600);  
  Serial.begin(9600);
  pinMode(LED, OUTPUT);                                  // Start serial communication
}

void loop() 
{
  calculateSum();                                        // Call your function
  delay(3000);                                           // Wait a few seconds before asking again
}
void blink(int LED){
    digitalWrite(LED,HIGH);
    delay(600);
    digitalWrite(LED, LOW);
}
void calculateSum()                                      // calculate the sum of 2 numbers
{
  int num1 = 0, num2 = 0;                                // variable declared
  
  Serial.println("Enter first number: ");                // asking user to inout first number
  while (!Serial.available()) {}
  num1 = Serial.parseInt();

  Serial.println("Enter second number: ");              // asking user to inout first number
  while (!Serial.available()) {}
  num2 = Serial.parseInt();

  Serial.print("The sum is: ");                         // to print the sum
  Serial.println(num1 + num2);
}