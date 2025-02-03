#include <stdio.h>

int main() {
  int n, former1, former2, now, sum1, sum2;
  sum1 = sum2 = former1 = former2 = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &now);
    if (former2 == 10 || former1 == 10) {
      sum1 += 2*now;
    } else
      sum1 += now;

    former2 = former1;
    former1 = now;
  }

  former1 = former2 = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &now);
    if (former2 == 10 || former1 == 10) {
      sum2 += 2 * now;
    } else
      sum2 += now;

    former2 = former1;
    former1 = now;
  }

  printf("%d %d\n", sum1, sum2);
  if (sum1 > sum2)
    printf("violet");
  else if (sum1<sum2)
    printf("Lilsio");
  else
    printf("Let's play again!");
  ///printf(sum1 == sum2 ? "Let's play again!" :(sum1 > sum2 ? "violet" : "Lilsio"));
}