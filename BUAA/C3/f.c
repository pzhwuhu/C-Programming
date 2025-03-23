#include <stdio.h>
#include <string.h>
#include <math.h>

void printInBase(unsigned int a, int X) {
  int digits[32];
  int index = 0;
  unsigned int b = a;
  for (int i = 0; i < 32; i++) {
    digits[i] = 0;
  }
  while (b) {
    digits[index++] = b % X;
    b /= X;
  }
  //printf("%u in Base %d:\n", a, X);
  for (int i = index - 1; i >= 0; i--) {
    printf("%d", digits[i]);
  }
  printf("\n");
}

int main() {
  int t, m, n, number, len;
  char s[33];
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d", &m, &n);
    getchar();
    gets(s);
    // printf("%d %d %s\n",m,n,s);
    len = strlen(s);
    number = 0;
    for (int i = 0; i < len; i++) {
      number += (s[i] - '0') * (int)pow((double)m, (double)(len - i - 1));
    }
    printInBase((unsigned)number, n);
  }
}