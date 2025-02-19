#include <stdio.h>
int a, b;

int mod(int);

int main() {
  int x;
  scanf("%d%d", &a, &b);
  while (~scanf("%d", &x)) {
    printf("%d\n", mod(mod(mod(x))));
  }
}

int mod(int x) {
  int c = (((a * x) % b) * (x % b)) % b;
  c = (c + b) % b;
  int d = (x % b + b) % b;
  return (c + d) % b;
}