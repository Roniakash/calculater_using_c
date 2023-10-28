#include <stdio.h>

int main(void)
{
  char operat;

  int operand1, operand2;

  printf("Enter operator (+, -, *, /): ");
  scanf("%c", &operat);

  printf("Enter two operands (numbers): ");
  scanf("%d %d", &operand1, &operand2);

  switch (operat)
  {
    case '+':
      printf("%d + %d = %d\n", operand1, operand2, operand1 + operand2);
      break;
     
    case '-':
      printf("%d - %d = %d\n", operand1, operand2, operand1 - operand2);
      break;
      
    case '*':
      printf("%d * %d = %d\n", operand1, operand2, operand1 * operand2);
      break;
   
    case '/':
      printf("%d / %d = %d\n", operand1, operand2, operand1 / operand2);
      break;
      
    default:
      printf("Invalid operator entered.\n");
  }
  
  return 0;
}
