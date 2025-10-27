#include<stdio.h>

long long n;

long long check(long long k)
{
    long long tmp = k;
    long long tong = 0;
    while (k > 0)
    {
        tong = tong * 10 + k%10;
        k/=10;
    }
    if(tmp == tong) return 1;
    else return 0;
}

int main()
{
    scanf("%lld", &n);
    if(check(n) == 1) printf("YES");
    else printf("NO");
    return 0;
}