#include<stdio.h>
#define N 100005

int t;
int uoc[N+2];

void sang_uoc()
{
    for(int i=1;i<=N;i++){
        for(int j=i*2;j<=N;j+=i) {
            uoc[j] += i;
        }
    }
}

int main()
{
    scanf("%d", &t);
    sang_uoc();
    int count = 0;
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if(n == uoc[n]) count++;
    }
    
    printf("%d", count);

    return 0;
}