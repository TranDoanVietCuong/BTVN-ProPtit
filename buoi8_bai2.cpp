#include <stdio.h>

#define N 1000005
int cnt[N];
int n, q;

int main() 
{
    scanf("%d %d", &n, &q);
    for (int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        if(x % 2 == 0) cnt[i] = cnt[i-1] + 1;
        else cnt[i] = cnt[i-1];
    }
    while(q--){
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%d\n", cnt[r] - cnt[l-1]);
    }
    return 0;
}