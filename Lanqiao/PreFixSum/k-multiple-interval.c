#include <stdio.h>
#include <stdlib.h>
#define MAX 100005

long long pre[MAX];
int count[MAX];

int main(int argc, char *argv[])
{
    int n, k;
    long long res = 0;
    scanf("%d%d", &n, &k);
    count[0] = 1; // 初始状态，余数为0的前缀和数量为1,本身即可
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &pre[i]);
        pre[i] += pre[i - 1];
        res += count[pre[i] % k];
        count[pre[i] % k]++;
    }
    
    printf("%lld", res);
    return 0;
}