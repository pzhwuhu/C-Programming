#include <stdio.h>

int main() {
  unsigned int a;
  int x = 0;
  for (int i = 0; i < 32; i++) {
    scanf("%1u", &a);
    x |= a << (31 - i);
  };
  printf("%d",x);
}