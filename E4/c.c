#include <stdio.h>

int main() {
  int n, m, score = 0, hit = 0, max = 0;
  char c;
  scanf("%d", &n);
  getchar();
  m = n;
  while (m--) {
    scanf("%c", &c);
    getchar();
    switch (c) {
    case 'p':
      score += 300;
      hit++;
      break;
    case 'g':
      score += 208;
      hit++;
      break;
    case 'b':
      score += 105;
      if (hit > max)
        max = hit;
      hit = 0;
      break;
    case 'm':
      if (hit > max)
        max = hit;
      hit = 0;
    }
  }
  if (hit > max)
    max = hit;
  printf("%d\n%d\n", score, max);
  if (score == n * 300)
    printf("All Perfect!");
  else if (max == n)
    printf("Full Combo!");
  else
    printf("Moca Complete!");
}