#include <stdio.h>
int price[3000001], visited[3000001];

int main() {
  int n, m;
  int max, max_i;
  scanf("%d%d", &n, &m);
  n++;
  m++;
  for (int i = 0; i < n; i++) {
    scanf("%d", &price[i]);
  }
  for (int i = 0; i < m; i++) {
    max =  -1, max_i = 0;
    for (int j = 0; j < n; j++) {
      if (max < price[j] && visited[j] == 0) {
        max = price[j];
        max_i = j;
      }
    }
    if (price[max_i] < 6)
      break;
    visited[max_i] = 1;
    price[max_i] = 6;
  }

  long long sum = 0;
  for (int i = 0; i < n; i++) {
    sum += price[i];
  }
  printf("%lld",sum);
}