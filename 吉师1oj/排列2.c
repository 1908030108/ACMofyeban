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
                if(j==i)continue;    //����ظ���������ѭ��
                for(k=0;k<4;k++)    //���е�P44��P43����ȵ�����ֻ��Ҫ����ѭ��
                {
                    if(k==i||k==j)continue;
                    l=6-i-j-k;    //�������һ�������������е��±�
                    printf("%d%d%d%d ",a[i],a[j],a[k],a[l]);
                }
            }
            printf("\n");
        }
        if(n>0)printf("\n");
    }
    return 0;
}
