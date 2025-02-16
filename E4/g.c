#include <stdio.h>

int main() {
  int a, b, m, n, t = 0, i, j, remainder;
  int x[1000] = {0}, left[1000] = {0}; //记录小数部分和余数
  scanf("%d%d", &a, &b);
  printf("%d.", a / b);

  m = a, n = b;
  m = m % n;
  
  left[t++] = m;
  while (1) {
    m *= 10;
    x[t] = m / n;
    remainder = m % n;
    left[t] = remainder;

    for (i = 0; i < t; i++) {
      if (left[i] == remainder) {
        for (j = 1; j <= i; j++)
          printf("%d", x[j]);
        printf("(");
        for (j = i + 1; j <= t; j++)
          printf("%d", x[j]);
        printf(")");
        return 0;
      }
    }

    t++;
    m = m % n;
  }
}