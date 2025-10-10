char operator=''; 
int a =0;
int b=0;

void setup(){
  Serial.begin(9600);
}

void loop(){

  a = parseInt("Enter a: ");
  b = parseInt("Enter b: ");
  printf("Enter operator (+ - * /): ");

  scanf("%c", &operator);

  switch(operator){
    case '+' :
      printf("sum of a and b is %d", a+b);
    case '-':
      printf("difference between a and b is %d", a-b);
    case '*':
      printf("Mulitplication of a and b is %d", a*b);
    case '/':
      printf("a division by b is: %.3f ", (float)a /b);
  }
}