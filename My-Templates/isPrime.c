#include <stdio.h>

// 素数返回 1
int isPrime(int x) {
  if (x == 2)
    return 1;
  else if (x <= 1 || x % 2 == 0)
    return 0;
  for (int i = 3; i * i <= x; i += 2) {
    if (x % i == 0)
      return 0;
  }
  return 1;
}

int main() {
  int x;
  while (~scanf("%d", &x)) {
    printf("%d\n", isPrime(x));
  }
}