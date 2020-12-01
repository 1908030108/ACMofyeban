#include <stdio.h>
#define M 7654321

int main(void){
     int i, a, b, n, sum;
         scanf("%d", &n);
         a = b = 1;
         for(i = 3; i <= n; i++){
            sum = (a+b)%M;
            a = b;
            b = sum;
         }
         if(n == 1 || n == 2)
         printf("1\n");
         else
            printf("%d\n",sum);
return 0;
}
