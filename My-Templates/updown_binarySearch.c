#include <stdio.h>
int list[1000001];

int upper_binary(int l, int r, int key) {
  while (l < r) {
    int mid = l + (l - r) / 2;
    if (key < list[mid])
      r = mid;
    else
      l = mid + 1;
  }
  return l;
}

int lower_binary(int l, int r, int key) {
  while (l < r) {
    int mid = l + (l - r) / 2;
    if (key <= list[mid])
      r = mid;
    else
      l = mid + 1;
  }
  return l;
}

int main() {
}