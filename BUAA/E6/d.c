#include <stdio.h>
#include <string.h>

int chemic(char);

int main() {
  char str[201];
  int sum = 0;
  gets(str);
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (chemic(str[i])) {
      int j = i + 1, num = 1, base = 1;
      while (!chemic(str[j]) && str[j] != '\0')
        j++;
      if (j - i > 1) {
        num = 0;
        for (j--; j > i; j--) {
          num += (str[j] - '0') * base;
          base *= 10;
        }
      }
      sum += num * chemic(str[i]);
      //printf("%d %c\n", num, str[i]);
    }
  }

  printf("%d", sum);
}

int chemic(char c) {
  if (c == 'C')
    return 12;
  else if (c == 'H')
    return 1;
  else if (c == 'O')
    return 16;
  else if (c == 'N')
    return 14;
  else
    return 0;
}