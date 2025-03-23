#include <stdio.h>

int main() {
  int n, hour, min, time;
  scanf("%d", &n);
  while (n--) {
    scanf("%d%d", &hour, &min);
    time = hour * 60 + min;
    if (time >= 370 && time <= 22 * 60 + 20)
      printf("N\n");
    else
     printf("E\n");
  }
}