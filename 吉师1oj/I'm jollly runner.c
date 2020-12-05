#include <stdio.h>
#include <math.h>
#define M 100000

int abs(int n)
{
    if(n < 0) return -n;
    else return n;
}

int main(void)
{
    int n, i, j, flag;
     while(scanf("%d",&n)!=EOF)
     {
         flag = 0;
        int a[M], b[M];
        for(i = 0; i < n; i++)
            scanf("%d",&a[i]);
        for(i = 1; i < n; i++)
        {
            b[i] = abs(a[i]-a[i-1]);
        }
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= n - i - 1; j++)
            {
                if(b[j] > b[j+1])
                {
                int temp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = temp;
                }
            }
        }
//        for(i = 1; i < n; i++)
//            printf("%d ",b[i]);
        for(i = 1; i < n; i++)
        {
            if(b[i] != i)
            {
             flag = 1;
             printf("Not jolly\n");
             break;
            }
        }
        if(flag == 0)
        printf("Jolly\n");
     }
    return 0;
}

