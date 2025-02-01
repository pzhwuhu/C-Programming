#include <stdio.h>

int main() {
  int n, a, b, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d%d", &a, &b);
    if (a)
      printf("%d mod %d = %d\n", b, a, b % a);
    else
      printf("Wait. That's illegal.\n");
  }
}