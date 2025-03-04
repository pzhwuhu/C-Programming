#include <stdio.h>
int list[1000001];

int upper_binary(int l, int r, int key) {
  while (l < r) {
    int mid = l + (r - l) / 2;
    if (key < list[mid])
      r = mid;
    else
      l = mid + 1;
  }
  return l;
}

int lower_binary(int l, int r, int key) {
  while (l < r) {
    int mid = l + (r - l) / 2;
    if (key <= list[mid])
      r = mid;
    else
      l = mid + 1;
  }
  return l;
}

int main() {
  int n, t, key;
  scanf("%d%d", &n, &t);
  for (int i = 0; i < n; i++)
    scanf("%d", &list[i]);
  for (int i = 0; i < t; i++) {
    scanf("%d", &key);
    int upper = upper_binary(0, n, key);
    int lower = lower_binary(0, n, key);
    //printf("%d %d\n", lower, upper);
    if (upper > lower) {
      printf("%d %d\n", lower + 1, upper - lower);
    }
    else {
      printf("-1\n");
    }
  }
}