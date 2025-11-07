#include<stdio.h>

int n, m, k;
int a[1005][1005];

int main()
{
    scanf("%d %d %d", &n, &m, &k);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            scanf("%d", &a[i][j]);
            if(j != k) printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}