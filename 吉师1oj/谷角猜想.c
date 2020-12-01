#include <stdio.h>

int main(void){
    int n,sum;
    scanf("%d",&n);
    while(n!=1){
        if(n % 2==0){
            sum = n / 2;
            printf("%d/2=%d\n",n,sum);
            n = sum;
        }
        else{
            sum = n* 3+1;
            printf("%d*3+1=%d\n",n,sum);
            n = sum;
        }

    }
return 0;
}

