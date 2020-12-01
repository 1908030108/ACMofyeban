#include <stdio.h>

int main(void){
    int n, i, j;
    scanf("%d",&n);
    int sum = 0;
    int a[n+1][n+1];
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
                sum = sum + 1;
           a[i][j] = sum;
        }
    }
    for(i = 1; i < n; i++){
        for(j = 1; j <= i; j++)
            a[i-j][j] = a[i][j];
    }
    for(i = 0;i < n; i++){
        for(j = 0; j < n-i; j++){
        if(a[i][j] && j !=n-i-1){
            printf("%d ",a[i][j]);
        }else if(a[i][j])
        printf("%d",a[i][j]);
    }
    printf("\n");
    }
    return 0;
}
