#include<cstdio>
#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[10][10]={0};
    while(cin>>n){
        for(int i=0;i<n;i++)
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i)
                    a[i][j]=1;
                else
                    a[i][j]=a[i-1][j-1]+a[i-1][j];
            }

        for(int i=0;i<n;i++)     //�����������
        {
            for(int j=0;j<i;j++) // ���ƿո��������һ�в�����ո񣬵ڶ���һ����jֻҪС��i��ÿ��ѭ���Ի����һ���ո�
                printf(" ");
            for(int k=0;k<n-i;k++)     //��������Ԫ��
            {
                printf("%3d",a[n-i-1][k]);  //������λ�������Ԫ�أ�n-i-1Ϊ��ǰ����
                printf(" ");
            }
            printf("\n");
        }

    }
       return 0;
}


