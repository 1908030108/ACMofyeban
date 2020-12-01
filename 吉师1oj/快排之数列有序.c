#include <stdio.h>
#define N 50

int main(void){
    int n, i, j, k;
    int a[2*N], b[2*N];
    scanf("%d",&n);
    while(n--){
        for(i = N; i < N+9; i++)
            scanf("%d",&a[i]);
        for(i = N+1, j = N+1, k=N-1; i<N+9; i++){
            if(a[i] > a[N]){
               b[j] = a[i];
               j++;
            }
            else{
               b[k] = a[i];
               k--;
            }
        }
        b[N] = a[N];
        for(i = k+1; i < j; i++)
           printf("%d ",b[i]);
        printf("\n");
    }
return 0;
}
