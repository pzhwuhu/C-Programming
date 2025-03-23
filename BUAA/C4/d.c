#include <stdio.h>

int main() {
  int a, b, card = 0, num[6] = {0};
  while (~scanf("%d%d", &a, &b)) {
    card++;
    num[a] += b;
    for (int i = 1; i < 6; i++) {
      if (num[i] == 9) {
        printf("%d %d\n", card, i);
        num[i] = 0;
      }
    }
  }
}