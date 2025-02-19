#include <stdio.h>
char a, b, c;

void hanoi(int, char, char, char);
void move(int, char, char);

int main() {
  int n;
  scanf("%c %c %c%d", &a, &b, &c, &n);
  hanoi(n, a, b, c);
}

void hanoi(int n, char from, char via, char to) {
  if (n == 1) {
    move(n, from, to);
    return;
  }

  hanoi(n - 1, from, to, via);
  move(n, from, to);
  hanoi(n - 1, via, from, to);
}

void move(int i, char from, char to) {
  printf("Eika moved Koishi %02d form the %c to the %c\n", i, from, to);
}