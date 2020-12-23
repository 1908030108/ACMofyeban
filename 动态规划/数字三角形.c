#include <stdio.h>

int main()
{
    int a[400][400],i,j,n;
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            scanf("%d",&a[i][j]);
        }
        for(i=n;i>=0;i--)
        {
            for(j=0;j<=n;j++)
              {
                if(a[i][j]>a[i][j+1])
                   a[i-1][j]=a[i][j]+a[i-1][j];
                else
                   a[i-1][j]=a[i][j+1]+a[i-1][j];
              }
        }
        printf("%d\n",a[0][0]);
return 0;
}
