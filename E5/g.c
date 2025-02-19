#include <stdio.h>

void grey(int, int);

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < 1 << n; i++) {
    grey(n, i);
    printf("\n");
  }
}

void grey(int n, int x) {
  if (n == 1) {
    if (x == 0) {
      printf("0");
      return;
    }
    else {
      printf("1");
      return;
    }
  }

  if (x < 1 << (n - 1)) {
    printf("0");
    grey(n - 1, x);
  }
  else {
    printf("1");
    grey(n - 1, (1 << n) - 1 - x);
  }
}