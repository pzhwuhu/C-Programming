#include <stdio.h>
#include <string.h>

int main() {
  char str[502];
  int len = 0;
  printf("#include<stdio.h>\nint main()\n{\n");
  while (gets(str)) {
    len = strlen(str);
    printf("    puts(\"");
    for (int i = 0; i < len; i++) {
      if (str[i] == '\"' || str[i] == '\'' || str[i] == '\\')
        printf("\\");
      putchar(str[i]);
    }
    printf("\");\n");
  }
  printf("    return 0;\n}");
  return 0;
}