#include <stdio.h>

int main() {
  int n;
  char c[501];
  scanf("%d",&n);
  getchar();
  for (int i = 0; i < n; i++) {
    scanf("%c",&c[i]);
  }
  for (int i = 0; i < n; i++) {
    if(!(c[i]=='C'||c[i]=='V'||c[i]=='B'))
    printf("%c",c[i]);
  }
}