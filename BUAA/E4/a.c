#include <stdio.h>

int main() {
  char x;
  int n, i, j;
  scanf("%c%d", &x, &n);
  for (i = 0; i < n; i++) {
    for (j = 0; j < i; j++) {
      printf(" ");
    }
    for (j = 0; j < n - i; j++) {
      printf("%c", x);
    }
      printf("\n");
  }
}