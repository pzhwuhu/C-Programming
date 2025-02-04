#include <stdio.h>

int main() {
  int n, sum, remainder;
  char number[18];
  int ratio[18] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2, 0};
  scanf("%d", &n);
  getchar();
  while (n--) {
    sum = 0;
    for (int i = 0; i < 18; i++) {
      scanf("%c",&number[i]);
    }
    getchar();
    for (int i = 0; i < 17; i++) {
      sum += ratio[i]*(number[i] - '0');
    }
    remainder = sum % 11;
    if (remainder >= 3 && remainder <= 10) {
      printf(number[17] - '0' == 12 - remainder ? "YES\n" : "NO\n");
    }
    else if (remainder == 2) {
      printf(number[17] == 'X' ? "YES\n" : "NO\n");
    } else {
      printf(number[17] - '0' == 1 - remainder ? "YES\n" : "NO\n");
    }
  }
}