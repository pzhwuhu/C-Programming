#include <stdio.h>

int main() {
  int n, m;
  int price[3000001], visited[3000001];
  int max, max_i;
  scanf("%d%d", &n, &m);
  n++;
  m++;
  for (int i = 0; i < n; i++) {
    scanf("%d", &price[i]);
    visited[i]=0;
  }
  for (int i = 0; i < m; i++) {
    max = 0;
    for (int j = 0; i < n; j++) {
      if (max < price[j] && visited[j] == 0) {
        max = price[j];
        max_i = j;
      }
    }
    if (price[max_i] < 6)
      break;
    

  }
}