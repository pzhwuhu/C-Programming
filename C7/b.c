#include <stdio.h>
long long a[40][40], b[40][40];
long long res[40][40];

int main() {
  int m, n, x, op;
  scanf("%d%d%d", &m, &n, &op);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%lld", &a[i][j]);
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%lld", &b[i][j]);
    }
  }
  if (op == 1) {
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        res[i][j] = a[i][j] + b[i][j];
        printf("%lld ", res[i][j]);
      }
      puts("");
    }
  } else {
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        res[i][j] = a[i][j] - b[i][j];
        printf("%lld ", res[i][j]);
      }
      puts("");
    }
  }
}