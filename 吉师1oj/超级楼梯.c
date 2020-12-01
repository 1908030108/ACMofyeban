#include <stdio.h>

long long f(int m){
    if(m == 2 || m == 3) return m-1;
    else return f(m-2)+f(m-1);
}

int main(void){
    long long sum;
    int m, n;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&m);
        sum = f(m);
        printf("%d\n",sum);
    }
return 0;
}
