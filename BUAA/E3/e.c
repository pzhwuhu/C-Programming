#include <stdio.h>

int main() {
  int x, t, y;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &x);
    if (x == 1)
      printf("3\n");
    else {
      y = x & -x;
      if (x == y)
        printf("%d\n", y + 1);
      else
       printf("%d\n",y);
    };
  }
}