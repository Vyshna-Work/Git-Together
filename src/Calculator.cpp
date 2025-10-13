#include <Arduino.h>
// Simple Serial Calculator

float num1, num2, result;
char op;

void setup() {
  Serial.begin(9600);
  Serial.println("Simple Calculator");
  Serial.println("Enter first number:");
}

void loop() {
  // Wait for input
  if (Serial.available()) {
    // Read first number
    num1 = Serial.parseFloat();
    Serial.print("You entered: ");
    Serial.println(num1);

    // Ask for operator
    Serial.println("Enter operator (+, -, *, /):");
    while (!Serial.available());
    op = Serial.read();

    // Flush newline character
    while (Serial.available()) Serial.read();

    // Ask for second number
    Serial.println("Enter second number:");
    while (!Serial.available());
    num2 = Serial.parseFloat();

    // Perform calculation
    switch (op) {
      case '+': result = num1 + num2; break;
      case '-': result = num1 - num2; break;
      case '*': result = num1 * num2; break;
      case '/':
        if (num2 != 0) result = num1 / num2;
        else {
          Serial.println("Error: Division by zero!");
          return;
        }
        break;
      default:
        Serial.println("Invalid operator!");
        return;
    }

    // Display result
    Serial.print("Result: ");
    Serial.println(result);

    // Ask for new calculation
    Serial.println("\nEnter next first number:");
  }
}
