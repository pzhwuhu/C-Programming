#include <stdio.h>
#include <string.h>
int matrix[400][400];
char s[100001];

int main() {
  gets(s);
  int len = strlen(s), n = 1;
  while (n * n < len)
    n++;
  for (int i = 0; i < len; i++) {
    matrix[i / n][i % n] = s[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (matrix[j][i])
        printf("%c", matrix[j][i]);
    }
  }

}