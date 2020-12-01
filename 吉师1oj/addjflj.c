#include <stdio.h>
#define M 1000
int a[M][M];
int main(void){
    int n,i,j,max,x, y;
    scanf("%d",&n);
    for(i = 0; i <n; i++){
        for(j = 0; j< n; j++)
            scanf("%d",&a[i][j]);
    }
    max = a[0][0];
    x = 1;
    y = 1;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(max < a[i][j]){
                 max = a[i][j];
                 x = i+1;
                 y = j+1;
            }
        }
    }
    printf("%d %d %d\n",max, x, y);
return 0;
}
