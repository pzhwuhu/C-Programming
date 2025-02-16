#include <stdio.h>

int main() {
  int n, k;
  int alive, num, pos, die[1002] = {0};
  scanf("%d%d", &n, &k);
  alive = n;
  num = pos = 0;
  while (alive > 1) {
    pos++;

    if (pos == n + 1)
      pos = 1; //循环
    if (die[pos])
      continue; // 已经出局
    
    num++; //报数
    if (num == k) {
      die[pos] = 1;
      alive--;
      num = 0;
    }
  }
  for (int i = 1; i <= n; i++) {
    if (die[i] == 0) {
      printf("%d", i);
    }
  }
}