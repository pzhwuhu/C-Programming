#include <stdio.h>

void printfraction(int , int );
    
int main() {
  int a, b, c, d, op, up, down;
  while (~scanf("%d/%d%d/%d%d", &a, &b, &c, &d, &op)) {
    //printf("%d%d%d%d%d\n", a, b, c, d, op);
    switch (op) {
    case 1:
      up = a * d + b * c;
      down = b * d;
      break;
    case 2:
      up = a * d - b * c;
      down = b * d;
      break;
    case 3:
      up = a * c;
      down = b * d;
      break;
    case 4:
      up = a * d;
      down = b * c;
      break;
    }
    printfraction(up, down);
  }
}

void printfraction(int a, int b) {
  int gcd, up, down;
  up = a, down = b;
  while ((gcd = a % b) != 0) {
    a = b;
    b = gcd;
  }
  gcd = b;
  up /= gcd;
  down /= gcd;
  if (down == 1)
    printf("%d\n", up);
  else
    down ? printf("%d/%d\n", up, down) : printf("%d/%d\n", -up, -down);
}