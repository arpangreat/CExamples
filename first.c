#include "first.h"
#include <stdio.h>

int main() {
  int a = 1;

  // type casting
  float b = (float)100;

  printf("Hello, World!\n");

  // Loop
  for (int i = 0; i < 10; i++) {
    printf("this is i %d\n", i);

    printf("---\n");

    for (int h = 0; h < i; h++) {
      printf("this is h %d\n", h);

      printf("|||\n");

      for (int j = 0; j < h; j++) {
        printf("this is j %d\n", j);
      }
    }
  }

  return 0;
}
