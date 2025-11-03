#include<stdio.h>
#include<stdlib.h>
#define N 1000006

int n, p[N+3];
int a[N+3];
int b[N+3];

void sang()
{
    p[0] = p[1] = 1;
    for(int i = 2; i * i <= N; i++)
        if(p[i] == 0) 
            for(int j = i * i; j <= N; j += i) p[j] = 1;
}

int cmp(const void *x, const void *y) {
    return (*(int*)x - *(int*)y);
}

int main()
{
    scanf("%d", &n);
    sang();
    int k = 0;
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
        if(p[a[i]] == 0) b[++k] = a[i];
    }
    
    qsort(b, k+1, sizeof(int), cmp);
    
    for(int i = 1; i <= k; i++) printf("%d ", b[i]);
    return 0;
}