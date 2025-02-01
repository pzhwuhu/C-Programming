#include <stdio.h>

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  printf("%d\n", 2 * m - n);
  if (2 * m - n >= 4)
    printf("Yes");
  else
    printf("No");

  return 0;
}