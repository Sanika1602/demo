#include <stdio.h>
int main() {

  char op;
  double first, second;
  printf("Enter operand1: ");
  scanf("%lf ", &first);
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter operand2: ");
  scanf("%lf",&second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    default:
      printf("Invalid Operator");
  }

  return 0;
}
