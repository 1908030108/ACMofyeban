#include <stdio.h>

int main(void)
{
    int n, m, a[500], i, j;
    while(~scanf("%d%d",&n,&m))
    {
        if(n == 0 && m == 0) return 0;
        for(i = 0; i < n; i++)
            scanf("%d",&a[i]);
        if(m <= a[0])
        {
            printf("%d ",m);
            for(i = 0; i < n; i++)
                printf("%d ",a[i]);
            printf("\n");
            continue;
        }
        if(m > a[n-1])
        {
            for(i = 0; i < n; i++)
                printf("%d ",a[i]);
            printf("%d ",m);
            printf("\n");
            continue;
        }
        for(i = 0; i < n; i++)
        {
            if(m >= a[i] && m <= a[i+1])
            {
                for(j = 0; j <= i; j++)
                    printf("%d ",a[j]);
                printf("%d ",m);
                break;
            }
        }
        for(int k = i+1; k < n; k++)
            printf("%d ", a[k]);
        printf("\n");
    }
    return 0;
}
