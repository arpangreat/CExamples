#include <stdio.h>

int main(int argc, char *argv[]) {
  int a = 1;

  for (int i = 0; i < 100; i++) {
    a++;

    if (a <= 40) {
      printf("yes\n");
    } else {
      printf("not\n");
    }
  }

  return 0;
}
