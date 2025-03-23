#include <stdio.h>
#include <string.h>

int main() {
  char s[101];
  gets(s);
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= '0' && s[i] <= '9') {
      printf("%c",'0'+'9'-s[i]);
    }
    else if (s[i] >= 'a' && s[i] <= 'z') {
      printf("%c",'a'+'z'-s[i]);
    } else
      printf(" ");
  }
}