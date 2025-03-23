#include <stdio.h>

int isPrime(int);

int main() {
  int l, r, num = 0;
  scanf("%d%d", &l, &r);
  for (int i = l; i <= r - 2; i++) {
    if (isPrime(i) & isPrime(i + 2)) {
      printf("%d %d\n", i, i + 2);
      num++;
    }
  }
    printf("%d", num);
}

int isPrime(int x) {
  if (x == 2 || x == 3 || x == 5 || x == 7)
    return 1;
  else if (x == 1 || x % 2 == 0)
    return 0;
  for (int i = 3; i * i <= x; i += 2) {
    if (x % i == 0)
      return 0;
  }
  return 1;
}
