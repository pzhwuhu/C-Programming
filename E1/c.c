#include <stdio.h>

int main() {
  int n, need, sum, a;
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a);
    sum += a;
  }
  scanf("%d", &need);
  if (sum >= need) {
    printf("%d\nMoca finish all requirements!",need);
  }
  else if (sum <= 0) {
    printf("0\nMoca finish 0 requirements!");
  } else {
    printf("%d",sum);
  }
  return 0;
}