#include <stdio.h>

int a, minn = 1000001, cnt = 0;
int n;

int main() {
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a < minn) {
            minn = a;
            cnt = 1;
        } 
        else if (a == minn) cnt++;
    }

    printf("%d %d", minn, cnt);
    return 0;
}
