#include <cstdio>
#include<iostream>
using namespace std;
const int N = 1e6+10;
int n, stu[N],q[N];
long long  res = 0;
int main()
{
    scanf("%d",&n);
    for(int i = 1; i <= n; i ++ )
        scanf("%d",&stu[i]);
    //定义双指针，记录头尾
    int st,ed;
    for(int i = 1; i <= n; i ++)
    {
        //递增情况
        if(stu[i] > stu[i-1])
            q[i] = q[i-1] + 1;
        //相等情况
        else if(stu[i] == stu[i-1])
            q[i] = q[i-1];
        else
        {
            st = ed = i;//初始化指针
            while(stu[ed] < stu[ed-1] && ed <=n)//双指针：寻找尾指针
                ed++;
            for(int j = ed-1; j >= st; j --)//逆方向递增
                q[j] = q[j+1] + 1;
            if(q[st] >= q[st-1])q[st-1] = q[st]+1;//特殊情况
            i = ed-1;//更新
        }
    }
    for(int i = 1; i <= n; i ++)
        res += q[i];
    printf("%ld\n",res);
    return 0;
}
