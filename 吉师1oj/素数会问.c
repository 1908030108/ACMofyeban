#include<stdio.h>
#include<math.h>
int is_prime(int a)
{
    if (a == 2 || a == 3 || a == 5)
        return 1;
    if (a % 6 != 1 && a % 6 != 5)
        return 0;
    int k = sqrt(a);
    int i;
    for (i = 5; i <= k; i++)
        if (a%i == 0)
            return 0;
    return 1;
}
int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    if (a <= 2 && 2 <= b)
        printf("2\n");
    if (a <= 3 && 3 <= b)
        printf("3\n");
    if (a <= 5 && 5 <= b)
        printf("5\n");
    if (a <= 7 && 7 <= b)
        printf("7\n");
    if (a <= 11 && 11 <= b)
        printf("11\n");
    int i;
    int j;
    int judge = 1;
    if (b>=101)
        for (i = 10; i <= 9999; i++)
        {
            for (j = 0; j <= 1; j++)
            {
                int k = i;
                int k2 = i;
                if (j == 0)
                    k /= 10;
                while (k)
                {
                    k2 = k2 * 10 + k % 10;
                    k /= 10;
                }
                if (a<=k2 && k2 <= b)
                {
                    if (is_prime(k2))
                        printf("%d\n",k2);
                }
                if (k2 > b&& j == 0)
                {
                    judge = 0;
                    break;
                }
            }
            if (judge != 1)
                break;
        }
    return 0;
}
