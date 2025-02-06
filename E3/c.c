#include <stdio.h>

void printBinary(int x) {
  for (int i = 31; i >= 0; i--) {
    printf("%d", (x >> i) & 1);
  }
    printf("\n");
}
int main() {
  unsigned int a, b, c, d, e;
  scanf("%u%u", &a, &b);
  c = a & b;
  d = a ^ b;
  e = (c << 1) + d;
  printBinary(a);
  printBinary(b);
  printBinary(c);
  printBinary(d);
  printBinary(e);
  printf("%u",e);
}