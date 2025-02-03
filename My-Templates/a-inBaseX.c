#include <stdio.h>

void printInBase(unsigned int a, int X) {
  int digits[32];
  int index = 0;
  unsigned int b = a;
  for (int i = 0; i < 32; i++) {
    digits[i]=0;
  }
  while (b) {
    digits[index++] = b % X;
    b /= X;
  }
  printf("%u in Base %d:\n", a, X);
  for (int i = index - 1; i >= 0; i--) {
    printf("%d",digits[i]);
  }
  printf("\n");
}

int main() {
  unsigned int a;
  int X;
  while (~scanf("%u%d", &a, &X)) {
    printInBase(a,X);
  }
}