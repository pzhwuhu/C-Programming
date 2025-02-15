#include <stdio.h>

void hanoi(int n, char a, char b, char c); // 接口清晰,n为n个盘子的汉诺塔
void move(int i, char from, char to);  //将第n号盘子移动

int main() {
  freopen("hanoi.txt", "w", stdout);
  int num;
  char a = 'A', b = 'B', c = 'C';
  scanf("%d", &num);
  hanoi(num, a, b, c);
  fclose(stdout);
  return 0;
}

void hanoi(int n, char from, char via, char to) {
  if (n == 1) {
    move(n, from, to);
    return;
  }
  hanoi(n - 1, from, to, via); // 调用正确
  move(n, from, to);
  hanoi(n - 1, via, from, to); // 调用正确
}

void move(int i, char from, char to) {
  printf("disk %d, %c --> %c\n", i, from, to);
}