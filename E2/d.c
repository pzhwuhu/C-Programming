#include <stdio.h>
#include <math.h>

int main() {
  int t, n;
  double value1, value2;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    value1 = value2 = 0;
    scanf("%d", &n);
    for (int j = 0; j < n; j++) {
      value1 += pow(-1.0, j) / (2 * j + 1);
      value2 += 1.0/(2*j+1) * 1.0/(2*j+1);
    }
    value1 *= 4;
    value2 = sqrt(value2 * 8);
    //printf("%.6f %.6f",value1,value2);
    printf("%.6f\n",fabs(value1-value2));
  }
}