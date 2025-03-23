#include <stdio.h>

int main() {
  int sum1, sum2, x;
  sum1 = sum2 =0;
  for (int i = 0; i < 4; i++) {
    scanf("%d", &x);
    if (x > 0)
      sum1 += x;
    else
      sum2 += x;
  }
  printf("%d\n%d", sum1, sum2);
  return 0;
}