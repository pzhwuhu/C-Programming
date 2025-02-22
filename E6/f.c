#include <stdio.h>
#include <string.h>
char s[101];

int less(int p, int q) {
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    if (s[(p + i) % len] != s[(q + i) % len]) {
      return s[(p + i) % len] < s[(q + i) % len];
    }
  }
  return 0;
}

int main() {
  gets(s);
  int len = strlen(s), mini = 0;
  for (int i = 0; i < len; i++) {
    if (less(i, mini))
      mini = i;
  }
  for (int i = 0; i < len; i++)
    printf("%c", s[(i + mini) % len]);
}