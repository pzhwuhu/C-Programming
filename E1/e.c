#include <stdio.h>

int main() {
  int a, b;
  int factorial_a, factorial_b;
  factorial_a = factorial_b = 1;
  scanf("%d%d", &a, &b);
  for (int i = a; i > 0; i--) {
    factorial_a *= i;
  }
  for (int i = b; i > 0; i -= 2) {
    factorial_b *= i;
  }
  printf("%d %d \n", factorial_a, factorial_b);
  printf(factorial_a > factorial_b ? "a!>b!!" :
                factorial_a < factorial_b ? "a!<b!!" : "a!=b!!");

  return 0;  
}