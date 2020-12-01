#include <stdio.h>

int main(void){
    int n, i, j;
    scanf("%d",&n);
    int a[n][n];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
        scanf("%d",&a[i][j]);
    for(j = 0; j < n; j++){
        for(i = 0; i < n; i++)
        printf("%d ",a[i][j]);
      printf("\n");
    }

return 0;
}
