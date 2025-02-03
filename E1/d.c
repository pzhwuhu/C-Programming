#include <stdio.h>
int a[3], b[3];

int joy_end(int x, int y, int z) {
  int tmp1, tmp2;
  tmp1 = tmp2 = 0;

  tmp1 += a[x];
  tmp2 += tmp1 * b[x];
  tmp1 += a[y];
  tmp2 += tmp1 * b[y];
  tmp1 += a[z];
  tmp2 += tmp1 * b[z];

  return tmp2;
}

int main() {
  int op;
  int excitement, joy;
  excitement = joy = 0;
  for (int i = 0; i < 3; i++) {
    scanf("%d%d", &a[i], &b[i]);
  }
  scanf("%d", &op);
  printf("%d", (op == 1) ? joy_end(0, 1, 2)
                         : (op == 2 ? joy_end(1, 2, 0) : joy_end(2, 1, 0)));
  return 0;
}
