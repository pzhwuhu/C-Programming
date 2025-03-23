#include <stdio.h>
#define mod 1000000007

int f(int);

int main() {
  int x;
  while (~scanf("%d", &x)) {
    printf("%d\n", f(f(x)));
  }
}

int f(int x) {
  long long ans = 1;
  for (long long i = 1; i <= x; i++)
    ans = (ans * i) % mod ;
  return ans;
}