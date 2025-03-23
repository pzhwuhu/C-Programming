#include <stdio.h>
#include <string.h>

int main() {
  char str[1001], sub[5] = "kiss", *now = NULL, *find = NULL;
  int num = 0;
  while (~scanf("%s", str)) {
    num = 0;
    for (int i = 0; i < strlen(str); i++) {
      if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 'a' - 'A';
    }
    now = strstr(str, sub);
    while (now) {
      find = now;
      num++;
      now++;
      now = strstr(now, sub);
    }
    printf("%d ", num);
    if (num)
      printf("%lld\n", find - str);
    else
      printf("-1\n");
  }
}