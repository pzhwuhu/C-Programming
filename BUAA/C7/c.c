#include <stdio.h>
#include <string.h>

int main() {
  char str[1001];
  char goal[1001];
  gets(str);
  gets(goal);
  char *begin = NULL, *end = NULL, *index = goal;
  while (*index != '\0') {
    begin = strchr(str, *index);
    end = strrchr(str, *index);
    if (begin) {
      if (begin == end) {
        printf("%lld\n", begin - str);
      } else {
        printf("%lld\n", end - begin);
      }
    } else {
      printf("-1\n");
    }
    index++;
  }
}