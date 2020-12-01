#include<stdio.h>
int main()
{
    int a[4]={0},i,j,k,l,n;
    scanf("%d",&n);
    while(n-->0)
    {
        for(i=0;i<4;i++)
            scanf("%d",&a[i]);
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(j==i)continue;    //如果重复跳出本次循环
                for(k=0;k<4;k++)    //排列的P44和P43是相等的所以只需要三重循环
                {
                    if(k==i||k==j)continue;
                    l=6-i-j-k;    //计算最后一个数字在数组中的下标
                    printf("%d%d%d%d ",a[i],a[j],a[k],a[l]);
                }
            }
            printf("\n");
        }
        if(n>0)printf("\n");
    }
    return 0;
}
