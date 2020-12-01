#include <stdio.h>

int main(void){
    int n,a[12][12]={0},i,j,k;
    while (scanf("%d",&n)!=EOF&&(n>=1&&n<=10))
    {
       int  a[10][10]={0};
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(i==j||j==0)
                    a[i][j]=1;
                else
                    a[i][j]=a[i-1][j]+a[i-1][j-1];
            }

        }
//        for(i=0;i<n;i++)
//        {
//            for(j=0;j<i;j++)
//                printf(" ");
//            for(k=0;k<n-i;k++){
//                printf("%-2d",a[n-i-1][k]);
//                printf(" ");
//            }
//            printf("\n");
//        }
//        printf("\n");

      for(i = n -1; i >= 0; i--){
        for(k=0; k < n-i-1; k++){
            printf(" ");
        }
        for(j = 0; j <=i;j++)
            printf("%-2d",a[i][j]);
            printf("\n");
      }
    }

return 0;
}
