#include <stdio.h>
char map[102][102];
int n, m;

void fill() {
  int num = 0;
  int move[8][2] = {{1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}};
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      num = 0;
      if (map[i][j] != 'M') {
        for (int k = 0; k < 8; k++) {
          if (map[i + move[k][0]][j + move[k][1]] == 'M')
            num++;
        }
        map[i][j] = num + '0';
      }
    }
  }
}

int main() {
  scanf("%d%d", &n, &m);
  getchar();
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      scanf("%c", &map[i][j]);
    }
    getchar();
  }
  fill();
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      printf("%c", map[i][j]);
    }
    puts("");
  }
}