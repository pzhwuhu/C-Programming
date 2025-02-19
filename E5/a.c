#include <stdio.h>

int f(int, int);

int main() {
  int a, b;
  while (~scanf("%d%d", &a, &b)) {
    printf("%d\n", f(a, b));
  }
}

int f(int a, int b) {
  int i, c = 1, d = 1;
  for (i = 0; i < b; i++)
    c *= a;
  for (i = 0; i < a; i++)
    d *= b;
  return c > d ? c - d : d - c;
}