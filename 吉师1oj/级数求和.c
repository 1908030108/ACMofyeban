#include <stdio.h>

int main(void){
    int  k;
    double i, sum;
    scanf("%d",&k);
    sum = 0;
    for(i = 1;; i++){
        if(sum > k) break;
        sum = sum + 1.0/i;
       // printf("sum%d = %d\n",i,sum);
    }
   // printf("sum%d = %d\n",i,sum);
    i--;
    printf("%.0f\n",i);
return 0;
}
