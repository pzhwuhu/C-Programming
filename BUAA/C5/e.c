#include <stdio.h>

int catalan(int);

int main() {
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    printf("%d\n", catalan(n));
  }
}

int catalan(int n) {
  if (n == 0)
    return 1;
  
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans += catalan(i) * catalan(n - 1 - i);
  }
  return ans;
}