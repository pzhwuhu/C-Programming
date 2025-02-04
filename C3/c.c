#include <stdio.h>

int main() {
  int n;
  unsigned int a;
  scanf("%d", &n);
  while (n--) {
    scanf("%u", &a);
    printf("%u\n", (a & 0x00FF) << 16 | (a & 0xFF00) >> 16);
  }
}