#include <stdio.h>

int main() {
  int p, q, t;
  scanf("%d%d",&p, &q);
  while (q) {
    printf("%d ", p / q);
    t = p % q;
    p = q;
    q = t;
  }
}