#include "stdio.h"
int main() {
  int num1, num2, choice;
  char ch;
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("\n");
  printf("Enter the second number: ");
  scanf("%d", &num2);
  printf("\n");
  printf("Enter 1 for addition, 2 for substraction, 3 for multiply and 4 for "
         "divide: ");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("The result is: %d\n", num1 + num2);
    break;
  case 2:
    printf("The result is: %d\n", num1 - num2);
    break;
  case 3:
    printf("The result is: %d\n", num1 * num2);
    break;
  case 4:
    printf("The result is: %d\n", num1 / num2);
    break;
  default:
    printf("Enter a choice as given\n");
  }

  return 0;
}
