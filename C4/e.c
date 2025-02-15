#include <stdio.h>

int main() {
  int PTS[13] = {0}, FGA[13] = {0}, FTA[13] = {0};
  int m, i, x, y;
  double TS = 0;
  scanf("%d", &m);
  while (~scanf("%d%d%d", &i, &x, &y)) {
    if (x == 1)
      FTA[i]++;
    else
      FGA[i]++;
    if (y)
      PTS[i] += x;
  }
  for (int i = 1; i <= m; i++) {
    if (FTA[i] || FGA[i]) {
      TS = 50.0 * PTS[i] / (FGA[i] + FTA[i] * 0.44);
      printf("%.2f%%\n",TS);
    } else {
      printf("NULL\n");
    }
  }
}