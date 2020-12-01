#include<stdio.h>
#include<malloc.h>
int main()
{
    int n,i;
    long long sum=0;
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int ));
    int *b=(int *)malloc(n*sizeof(int ));
    for( i=0;i<n;++i)
    {
        scanf("%d",a+i);
        b[i]=0;
    }
    b[0]=1;
    for( i=1;i<n;++i)
     {
     //后面的比前面的大，多奖励一个橘子
        if(a[i]>a[i-1]) b[i]=b[i-1]+1;
        //后一个跟前一个相等，分得一样多的橘子
        else if(a[i]==a[i-1]) b[i]=b[i-1];
        else if(a[i]<a[i-1])
        { //后一个小于前一个，这时候要麻烦一些
            b[i]=1;
            //从后往前面检查，让每一个分得的橘子合理
            for(int j=i-1;j>=0;--j)
            {
                if(a[j]>a[j+1])
                {
                //反向递增，如果前面的大于后面，再奖赏前面一个橘子
                //你以为直接b[j]++吗？如果是这样，那你错完了
                //试想一下如果成绩依次
                // 5 6 3
                //直接b[j]++那岂不是 变成 依次分得  1 3 1橘子？
                //因为 反向递增 多奖励了第二个人一个橘子
                //因此我们需要设置条件
                if(b[j]<=b[j+1]) b[j]++;
                }
                //3 4 5 5 4 3 2 1
                //如果成绩是这样的，局部两个极大值橘子可能会不相等
                if(a[j]==a[j+1])
                {
                if(b[j]<b[j+1])b[j]=b[j+1];
                }
                //反向不再递增，不再多奖励橘子
                else if(a[j]<a[j+1]) break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sum+=b[i];
    }
    printf("%lld",sum);
    return 0;
}
