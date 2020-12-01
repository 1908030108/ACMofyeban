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

        for(int i=0;i<n;i++)     //控制行数输出
        {
            for(int j=0;j<i;j++) // 控制空格输出，第一行不输出空格，第二个一个，j只要小于i，每次循环自会输出一个空格
                printf(" ");
            for(int k=0;k<n-i;k++)     //控制列数元素
            {
                printf("%3d",a[n-i-1][k]);  //按三个位置来输出元素，n-i-1为当前行数
                printf(" ");
            }
            printf("\n");
        }

    }
       return 0;
}


