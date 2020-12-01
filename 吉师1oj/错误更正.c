#include <stdio.h>

float fact(int n){
      float sum = 1;
      for(int i =1; i <= n;i++)
        sum = sum * i;
return sum;
}

int main(void){
    int m, n;
    scanf("%d%d",&m,&n);
    printf("%.0f",fact(m)/(fact(n)*fact(m-n)));
return 0;
}
