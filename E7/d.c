#include <stdio.h>

int main() {
  char str[1005];
  char s[1005];
  char format[105];
  char format_p[105];
  int k, x;
  gets(str);
  gets(format);
  scanf("%d%d", &k, &x);
  sscanf(str, format, s);
  sprintf(format_p, "%%%d.%ds", k, x);
  printf(format_p, s);
  // 读入
  // 用sscanf，以format作为格式化字符串，从str中读入内容并存入s
  // 用sprintf，将"%k.xs"输入至format_p
  // 用printf，以format_p作为格式化字符串输出s

  return 0;
}