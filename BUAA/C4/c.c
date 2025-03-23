#include <stdio.h>

int main() {
  int n, score, rank = 0, prev = -1, same = 0;
  char g;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &score);
    if (prev == score) {
      same++;
      printf("%c ", g);
    } else {
      rank += same + 1;
      if (10 * rank <= n)
        g = 'A';
      else if (10 * rank > n && 4 * rank <= n)
        g = 'B';
      else if (4 * rank > n && 10 * rank <= n * 6)
        g = 'C';
      else if (10 * rank > 6 * n && 10 * rank <= n * 9)
        g = 'D';
      else
        g = 'E';
      printf("%c ",g);
      prev = score;
      same = 0;
    }
  }
}