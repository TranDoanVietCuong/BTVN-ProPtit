#include <stdio.h>

#define N 1000005
int cnt[N];
int a[N];
int n;

int main() 
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    int ans = 0;
    int res = 0;
    for(int i = 1; i <= n; i++){
        if(cnt[a[i]] > ans){
            ans = cnt[a[i]];
            res = a[i];
        }
    }
    printf("%d %d", res, ans);
    return 0;
}