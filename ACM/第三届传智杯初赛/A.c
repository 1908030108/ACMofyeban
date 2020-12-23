#include <stdio.h>

int main(void){
    int n, v, m, a;
    int sum = 0;
    int i = 0, j;   //i ÎªÈËÊı
    while(~scanf("%d%d%d%d",&n,&v,&m,&a)){
        i = 0;
        sum = 0;
        sum = sum + v;
    for(j = 1; j < n; j++){
            i++;
        if(i == m){
            i = 0;
            v = v + a;
        }
        sum = sum + v;
    }
    printf("%d\n",sum);
    }
return 0;
}
