#include <stdio.h>

int main() {
  int n, m, i, j, k, l, ans = 0;
  int core[40][40] = {0}, data[40][40] = {0};
  scanf("%d%d", &n, &m);
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &core[i][j]);
    }
  }
  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      scanf("%d", &data[i][j]);
    }
  }

  for (l = 0; l < m - n + 1; l++) {
    for (k = 0; k < m - n + 1; k++) {
      ans = 0;
      for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
          ans += core[i][j] * data[i + l][j + k];
        }
      }
      printf("%d ", ans);
    }
    puts("");
  }
}