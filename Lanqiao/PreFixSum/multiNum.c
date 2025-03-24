#include<stdio.h>

#define MAX 2*1e5+5

int flag; //0表示前缀含有偶数个负数，1表示奇数个
int num[2]; //记录前缀和中偶数个负数、奇数个负数的数量
long long n1, n2;

int main() {
    int n, x;
    scanf("%d", &n);
    num[0]++;
    while (n--) {
        scanf("%d", &x);
        if(x < 0) {
            flag = flag ^ 1;//将flag实现0 1翻转
        }
        n1 += num[flag ^ 1];
        n2 += num[flag];
        num[flag]++;
    }
    printf("%lld %lld", n1, n2);
}