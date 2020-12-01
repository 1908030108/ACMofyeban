#include <stdio.h>
typedef  long long ll;

ll fact(int n){
    if(n == 0) return 1;
    ll s = 1;
    for(int i = 1; i <= n; i++){
        s = s * i;
    }
    return s;
}

ll C(int n, int m){
    return fact(n)/(fact(m)*fact(n-m));
}

int main(void){
    int n, m;
    ll sum;
    while(~scanf("%d,%d",&n, &m)){
            sum = C(n, m);
        printf("%lld\n",sum);
    }
return 0;
}
