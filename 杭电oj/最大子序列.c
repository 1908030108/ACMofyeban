#include <stdio.h>
int main(void)
{
    int t,n,i,j,a[100001];
    int max;
    int sum;                  //���
    int start,end,zswz;
    scanf("%d",&t);
    for(j = 0; j < t; j++){
        scanf("%d",&n);
        for(i = 1; i < n+1; i++)
            scanf("%d",&a[i]);
        max = -1001;
        start = 1;
        end = 1;
        zswz = 1;
        sum= 0;
        for(i = 1; i < n+1; i++)
        {
            sum = sum +a[i];
            if(sum > max)
            {
                max = sum;
                start = zswz;
                end = i;
            }
            if(sum < 0)     //sum С��0 ��ʾǰ�����ֵΪ���� ��������0 ��ʼ����
            {
                sum  = 0;
                zswz = i+1;
            }
        }
        printf("Case %d:\n%d %d %d\n",j+1, max,start,end);
        if(j < t-1)
            printf("\n");
    }
    return 0;
}
