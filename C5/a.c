#include <stdio.h>
#include <math.h>

int main() {
  double x, a, b, c, d;
  while (~scanf("%lf", &x)) {
    a = cosh(x);
    b = log(a + 1);
    c = cos(atan(x));
    d = exp(c);
    printf("%.3f\n", d / b);
  }
}