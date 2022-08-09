#include <stdio.h>
int main() {
  int rows, i, j, space, k = 0;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  // assuming rows is 5
  for (i = rows; i >= 1; --i) {
    for (space = 0; space < rows - i; ++space)
      printf("  ");
    for (j = i; j <= (2 * i) - 1; ++j)
      printf("* ");
    for (j = 0; j < i - 1; ++j)
      printf("* ");
    printf("\n");
  }
  for (i = 2; i <= rows; ++i) {
    for (space = 1; space <= rows - i; ++space) {
      printf("  ");
    }
    for (k = 0; k != 2 * i - 1; ++k) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
