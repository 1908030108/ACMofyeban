#include <stdio.h>
#include <string.h>
#define N (int)1e6+10

//int const N = 1e6+10;
int res[N];
int main(void)
{

    int  n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        int red, black;
        scanf("%d%d",&red,&black);
        black = red^black;
        if(red==black){
            res[red]++;
        }
        else{
        res[red]++;
        res[black]++;
        }
    }
    int max=-1, r=-1;
    for(int i = 0; i < N; i++)
    {
        if(max < res[i])
        {
            max = res[i];
            r = i;
        }
    }
    memset(res, 0,N);
    printf("%d",r);
    return 0;
}
