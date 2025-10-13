#include <Arduino.h>

void setup() 
{
  Serial.begin(9600);                                    // Start serial communication
}

void loop() 
{
  calculateSum();                                        // Call your function
  delay(3000);                                           // Wait a few seconds before asking again
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