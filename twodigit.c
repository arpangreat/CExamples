#include <stdio.h>

int main() {
  int a;

  printf("Enter your number: ");
  scanf("%d", &a);

  if (a > 10 && a < 99) {
    printf("The number is a one digit  number\n");
  } else {
    printf("The number is not a one digit number\n");
  }
}
