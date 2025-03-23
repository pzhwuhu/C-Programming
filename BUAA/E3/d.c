#include <stdio.h>

int main() {
  int num_up, num_ak, num_0, sum, tmp, n, score, ak;
  int full[10] = {30, 20, 10, 10, 10, 10, 5, 5, 5, 5};
  ak = sum = num_up = num_ak = num_0 = 0;
  scanf("%d", &n);
  for (int j = 0; j < n; j++) {
    ak = tmp = 0;
    for (int i = 0; i < 10; i++) {
      scanf("%d", &score);
      tmp += score;
      if(score == full[i]) ak++;
    }
    if (tmp == 110)
      num_ak++;
    if (tmp >= 60)
      num_up++;
    if (ak == 0)
      num_0++;

    if (tmp >= 100)
      tmp = 100;

    sum += tmp;
  }
    printf("%.2f\n%d\n%d\n%d",(1.0 * sum) / n, num_up, num_ak, num_0);
}