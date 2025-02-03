#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c, t, x1, x2;
  scanf("%lf%lf%lf", &a, &b, &c);
  t = b * b - 4 * a * c;
  if (a == 0) {
    if (b == 0) {
      if (c == 0)
        printf("infinite solutions");
      else
        printf("No real root");
    } else {
      printf("%.2f",-c/b);
    }
  } else {
    if (t > 0) {
      x1 = (-b - sqrt(t)) / a / 2.0;
      x2 = (-b + sqrt(t)) / a /2.0;
      if (x1 < x2)
        printf("%.2f %.2f", x1, x2);
      else
       printf("%.2f %.2f",x2, x1);
    }
    else if (t == 0) {
      printf("%.2f",-b/a/2.0);
    }
    else {
      printf("No real root");
    }
  }
}