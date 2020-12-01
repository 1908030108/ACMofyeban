#include <stdio.h>

long long mu(int n){
     if(n <= 3) return 1;
     else return mu(n-1)+mu(n-3);
}

int main(void){
    int n;
    scanf("%d",&n);
    printf("%lld",mu(n));
return 0;
}
