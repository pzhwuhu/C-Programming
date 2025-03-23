#include <stdio.h>
#include <string.h>
int t, before[9][9], now[9][9], visited[10];

int judge() {
  //前后是否一致
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (now[i][j] != before[i][j] && before[i][j])
        return 0;
    }
  }

  // 检查每行
  for (int i = 0; i < 9; i++) {
    memset(visited, 0, sizeof(int) * 9);
    for (int j = 0; j < 9; j++) {
      visited[now[i][j]]++;
    }
    for (int j = 1; j <= 9; j++) {
      if (!visited[j])
        return 0;
    }
  }

  // 检查每列
  for (int i = 0; i < 9; i++) {
    memset(visited, 0, sizeof(int) * 9);
    for (int j = 0; j < 9; j++) {
      visited[now[j][i]]++;
    }
    for (int j = 1; j <= 9; j++) {
      if (!visited[j])
        return 0;
    }
  }

  // 检查九宫格
  for (int k = 0; k < 9; k++) {
    memset(visited, 0, sizeof(int) * 9);
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        visited[now[i + (k/3)*3][j+(k%3)*3]]++;
      }
    }
    for (int j = 1; j <= 9; j++) {
      if (!visited[j])
        return 0;
    }
  }

  return 1;
}

int main() {
  scanf("%d", &t);
  while (t--) {
    memset(before, 0, sizeof(int) * 81), memset(now, 0, sizeof(int) * 81);
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        scanf("%d", &before[i][j]);
      }
    }
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        scanf("%d", &now[i][j]);
      }
    }
    if (judge())
      puts("Moca finish this sudoku perfectly!");
    else
      puts("Moca is so careless!");
  }
}