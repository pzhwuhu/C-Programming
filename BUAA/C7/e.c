#include <stdio.h>
#include <string.h>

void encode(char *str) {
  char str1[1001], str2[1001], str3[2001];
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    str3[i] = str[i];
    str3[i + len] = str[len - 1 - i];
  }
  for (int i = 0; i < len; i++) {
    str1[i] = str3[2 * i];
    str2[i] = str3[2 * i + 1];
  }
  str1[len] = str2[len] = '\0';
  if (strcmp(str1, str2) < 0)
    strcpy(str, str1);
  else
    strcpy(str, str2);
}

int main() {
  char str[1001];
  int n;
  gets(str);
  scanf("%d", &n);
  while (n--)
    encode(str);
  puts(str);
}