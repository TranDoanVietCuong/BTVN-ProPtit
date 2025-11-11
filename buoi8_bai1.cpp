#include <stdio.h>

#define N 1000005
int cnt[N];
int n;

int main() 
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
            cnt[x]++;
    }
    int line = 0;
    for (int i = 1; i <= n; i++) {
        printf("%d", cnt[i]);
        line++;
        if (i < n) {
            if (line < 10) {
                printf(" ");
            } else {
                printf("\n"); 
                line = 0; 
            }
        }
        
        cnt[i] = 0;
    }
    return 0;
}