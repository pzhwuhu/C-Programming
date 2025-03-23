#include <math.h>
#include <stdio.h>

#define eps 1e-8

int s1, s2, x1, Y1, x2, y2;

double f(double);

int main() {
  double l, r, mid, expense;
  scanf("%d%d%d%d%d%d", &x1, &Y1, &x2, &y2, &s1, &s2);
  l = x1, r = x2, mid = (l+r)/2;
  while (r - l > eps) {
    if (f(mid) > 0)
      r = mid;
    else
      l = mid;

    mid = (l + r) / 2;
  }
  expense = s1 * (sqrt((r - x1) * (r - x1) + Y1 * Y1)) +
            s2 * sqrt((r - x2) * (r - x2) + y2 * y2);
  printf("%.3f %.3f", l, expense);
}

double f(double x) {
  return (s1 * (x - x1) / sqrt((x - x1) * (x - x1) + Y1 * Y1) +
          s2 * (x - x2) / sqrt((x - x2) * (x - x2) + y2 * y2));
}