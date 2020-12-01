#include <stdio.h>

int f(int m){
    int s = 0;
    while(m){
        s = s + m % 10;
        m = m / 10;
    }
    if(s == 9) return 1;
    else return 0;
}

int main(void){
    int n, sum, i;
    scanf("%d",&n);
    sum = 0;
    if(n < 8) {
         printf("0\n");
         return 0;
    }
    else{
        for(i = 9; i <= n; i++){
            if(i % 9 == 0 && f(i) == 1)
                sum++;
        }
    }
    printf("%d\n",sum);
return 0;
}
