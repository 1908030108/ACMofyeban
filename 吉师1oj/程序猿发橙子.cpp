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
    //����˫ָ�룬��¼ͷβ
    int st,ed;
    for(int i = 1; i <= n; i ++)
    {
        //�������
        if(stu[i] > stu[i-1])
            q[i] = q[i-1] + 1;
        //������
        else if(stu[i] == stu[i-1])
            q[i] = q[i-1];
        else
        {
            st = ed = i;//��ʼ��ָ��
            while(stu[ed] < stu[ed-1] && ed <=n)//˫ָ�룺Ѱ��βָ��
                ed++;
            for(int j = ed-1; j >= st; j --)//�淽�����
                q[j] = q[j+1] + 1;
            if(q[st] >= q[st-1])q[st-1] = q[st]+1;//�������
            i = ed-1;//����
        }
    }
    for(int i = 1; i <= n; i ++)
        res += q[i];
    printf("%ld\n",res);
    return 0;
}
