#include <stdio.h>
int function( int n, int m );

int main()
{
    int n, m;
    while ( (scanf( "%d%d", &n, &m ) ) != EOF )//以文件末尾结束
        function( n, m );

    return(0);
}

/*------------------------------------------------*/
int function( int n, int m )
{
    int    n1    = 0, sum = 0;    //定义n1表示加到第几个数（起始为0表示没开始加），sum表示和
    int    a    = 0;             //数列的第一个元素，以0开始，这样下面程序好写
    while ( n1 < n )
    {
        if ( (n - n1) >= m )     //看剩余的数列长度是否大于m
        {
            sum = 0;               //把和置0
            for ( int i = 0; i < m; i++ )  //求m个数的和
            {
                a    += 2;         //依次加2，变为数列中的每一个数
                sum    += a;      //求和
                n1++;              //记录加到第几个数
            }
            printf( "%d ", sum / m );  //输出平均值
        }else

             { //剩余数列长度不大于m，按实际长度求
                sum = 0; int t = n - n1;    //t表示剩余数列的长度
                 for ( int j = 0; j < t; j++ )    //循环求和
                    {
                       a    += 2;
                       sum    += a;
                       n1++;                    //记录加到第几个数
                    }
                printf( "%d \n", sum / t );    //输出平均值，带换行
             }
    }
}
