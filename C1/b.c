#include <stdio.h>

int main() {
  int i = 0;
  scanf("%d", &i);
  while (i > 0) {
    printf("+");
    i--;
  }
  return 0;
}