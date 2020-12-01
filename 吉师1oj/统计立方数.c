#include <stdio.h>
#include <math.h>

int main(void){
    int sum = 0;
    int x, y;
    while(~scanf("%d",&x)&&x != 0){
         y = pow(x, 1/3.0)+0.1;
         if(y*y*y == x) sum++;
    }
    printf("%d\n",sum);
return 0;
}
