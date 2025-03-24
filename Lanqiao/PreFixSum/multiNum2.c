#include <stdio.h>

#define MAX 200005

int sign[MAX]; //记录前缀中负数的个数
long long n1, n2; //分别记录负数个数为奇数、偶数的前缀个数

int main()
{
    int n, x;
    scanf("%d", &n);
    n2++;
    for (int i = 1; i <= n;i++) {
        scanf("%d", &x);
        sign[i] += sign[i - 1] + (x < 0);
        if(sign[i] & 1) {
            n1++;
        } else {
            n2++;
        }
    }

    printf("%lld %lld", n1*n2, n1*(n1 -1) / 2 + n2*(n2 -1)/2);
}