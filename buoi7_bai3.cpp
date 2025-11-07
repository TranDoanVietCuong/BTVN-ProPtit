#include <stdio.h>
#include <stdlib.h>
#define Nmax 105
#define ll long long

int M, P, N;
ll A[Nmax][Nmax];
ll B[Nmax][Nmax];
ll C[Nmax][Nmax]; 

int main() 
{
    scanf("%d %d %d", &M, &P, &N);

    for (int i = 0; i < M; i++) 
        for (int j = 0; j < P; j++) scanf("%lld", &A[i][j]);

    for (int i = 0; i < P; i++) 
        for (int j = 0; j < N; j++) scanf("%lld", &B[i][j]);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) { 
            C[i][j] = 0; 
            for (int k = 0; k < P; k++) 
                C[i][j] += A[i][k] * B[k][j];
            
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%lld", C[i][j]);
            if (j < N - 1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}