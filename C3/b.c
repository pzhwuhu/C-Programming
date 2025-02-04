#include <stdio.h>

int main() {
  unsigned int n, m;
  int t, k, op;
  scanf("%u%d", &n, &t);
  m = n;
  while (t--) {
    scanf("%d%d", &k, &op);
    if (op) {
      m |= 1<<k;
    }
    else {
     m &= ~(1<<k);
    }
    printf("%d\n",m);
  }
    printf("%d",m);
}