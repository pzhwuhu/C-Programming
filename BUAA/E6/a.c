#include <stdio.h>

int main() {
  int n = 0, number[500] = {0}, ans = 0;
  char op[500];
  while (~scanf("%d %c", &number[n], &op[n])) {
    if (op[n] == '=')
      break;
    n++;
  }
  
  ans += number[0];
  for (int i = 0; i < n ; i++) {
    switch (op[i]) {
    case '+':
      ans += number[i + 1];
      break;
    case '-':
      ans -= number[i + 1];
      break;
    }
  }
  printf("%d", ans);
}
