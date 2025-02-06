#include <stdio.h>
#include <math.h>

int printInBase(unsigned int a, int X) {
  int digits[32];
  int index = 0, value_10 = 0;
  unsigned int b = a;
  for (int i = 0; i < 32; i++) {
    digits[i] = 0;
  }
  while (b) {
    digits[index++] = b % X;
    b /= X;
  }
  //printf("%u in Base %d:", a, X);
  for (int i = index - 1; i >= 0; i--) {
    value_10 += digits[i] * (int)pow(10,i);
    //printf("%d", digits[i]);
  }
  // printf("\na_10 is %d\n",value_10);
  return value_10;
}

int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  for (int i = 2; i < 17; i++) {
    if (printInBase(a * b, i) == c) {
      printf("%d", i);
      return 0;
    }
  }
  printf("0");
}