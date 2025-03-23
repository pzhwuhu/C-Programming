#include <stdio.h>

int main() {
  int threshold;
  int num, num_up, k;
  int ave, ave_up;
  ave = ave_up = num = num_up = k =0;
  scanf("%d", &threshold);
  while (scanf("%d", &k) && k != -1) {
    num++;
    ave += k;
    if (k >= threshold) {
      num_up++;
      ave_up += k;
    }
  }
  if(num_up)
    printf("%d %d %d", num_up, ave / num, ave_up / num_up);
  else
    printf("0 %d -1", ave / num);
  return 0;
}