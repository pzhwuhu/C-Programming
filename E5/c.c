#include <stdio.h>
#include <math.h>
#define eps 1e-8

double f(double);

int main() {
  double l = -1.0, r = 10.0, mid = (l + r) / 2;
  double x;
  scanf("%lf", &x);
  while (r - l > eps) {
    if (f(mid) > x)
      r = mid;
    else
      l = mid;

    mid = (l + r) / 2;
  }
  printf("%.6f", l);
}

double f(double x) {
    return x * exp(x);
}