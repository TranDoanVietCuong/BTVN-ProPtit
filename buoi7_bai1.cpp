#include<stdio.h>
#define N 1000005
int n;
int p[N];
int a[1005][1005];
void sang()
{
    p[0]=p[1]=1;
    for (int i = 2; i * i <= N; i++)
        if(p[i] == 0)
            for(int j = i * i; j <= N; j += i) p[j] = 1;
}

int main()
{
    scanf("%d", &n);
    sang();
    int sum = 0;
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int tmp = n / 2 + 1;
    int k = 1;
    while(k <= n){
        if(p[a[k][k]] == 0) sum += a[k][k];
        k++;
    }
    if(n % 2 == 1) 
        if(p[a[tmp][tmp]] == 0) sum -= a[tmp][tmp];
    int i = 1, j = n;
    while(i <= n && j >= 1)
    {
        if(p[a[i][j]] == 0) sum += a[i][j];
        i++;
        j--;
    }

    printf("%d", sum);
    return 0;
}