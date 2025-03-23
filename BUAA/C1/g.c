#include <stdio.h>

int main() {
  int x, num;
  scanf("%d", &x);
  num = 0;
  while (x != 1) {
    if (x % 2)
      x = 3 * x + 1;
    else
      x = x / 2;

    num += 1;
  }
  printf("%d", num);
  return 0;
}