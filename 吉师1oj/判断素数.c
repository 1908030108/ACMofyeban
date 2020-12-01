#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, y, n, f;
    while(~scanf("%d%d",&x, &y))
    {
        if(x == 0 && y == 0) return 0;
        int flag = 1;
        for(n = x; n <= y; n++)
        {
            int m = pow(n, 2) + n + 41;
            for(int i = 2; i < n; i++)
            {
                if(n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            f = 0;
            if(flag == 1) f = 1;
        }
        if(f == 1) printf("OK\n");
        else printf("Sorry\n");
    }
    return 0;
}
