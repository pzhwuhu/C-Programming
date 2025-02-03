#include<stdio.h>

int main(){
  int apple_left, banana_left, apple_store, banana_store;
  int sum, n, op, type;
  apple_store = banana_store = 0;
  scanf("%d%d%d%d", &n, &sum, &apple_left, &banana_left);
  while (n--) {
    scanf("%d%d", &op, &type);
    if (op) {
      if (type) {
        if (banana_store) {
          printf("Ok!\n");
          banana_store--;
        } else {
          printf("Failed!\n");
        }
      } else {
        if (apple_store) {
          printf("Ok!\n");
          apple_store--;
        } else {
          printf("Failed!\n");
        }
      }
    } else {
      if (type) {
        if (sum >= 2 && banana_left > 0) {
          sum -= 2;
          banana_left--;
          banana_store++;
          printf("Ok!\n");
        } else {
          printf("Failed!\n");
        }
      } else {
        if (sum >= 3 && apple_left > 0) {
          sum -= 3;
          apple_left--;
          apple_store++;
          printf("Ok!\n");
        } else {
          printf("Failed!\n");
        }
      }
    }
  }
  printf("%d %d %d", apple_left, banana_left, sum);
  return 0;
}