#include <stdio.h>

int love[200005];

int main() {
  int n, m, limit, l, r, x, sum = 0, num = 0;
  scanf("%d%d%d", &n, &m, &limit);
  for (int i = 0; i < m; i++) {
    scanf("%d%d%d", &l, &r, &x);
    love[l] += x;
    love[r+1] -= x;
  }
  for (int i = 1; i <= n; i++) {
    sum += love[i];
    if (sum >= limit)
      num++;
  }
  printf("%d", num);

}