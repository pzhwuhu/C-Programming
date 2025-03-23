#include <stdio.h>

int x;
int test();
int main() {
  printf("A: %d\n", x);
  int x = 5;
  printf("B: %d\n", x);
  x = test();
  {
    int x = 7;
    printf("C: %d\n", x);
  }
  printf("D: %d\n", x);
  return 0;
}
int test() {
  int x = 3;
  return x;
}