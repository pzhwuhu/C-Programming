#include <stdio.h>

int main() {
  int x, flag = 0;
  while (~scanf("%1d", &x)) {
    if (x) {
      flag++;
      printf(flag % 2 ? "+1 " : "-1 ");
    } else
      printf("0 ");
  }
}