#include <stdio.h>

int main() {
  int n;
  while (~scanf("%d", &n)) {
    for (int i = 31; i >= 0; i--) {
      printf("%d",(n >> i) & 1);
    }
    printf("\n");
  }
}