/**
第一种方法 运用等比数列求和公式可直接得出
#include <bits/stdc++.h>
#define m 100
using namespace std;

int main(void){
    int n;
    double s, x;
    scanf("%d",&n);
    s = 2 * m* (1 - pow(0.5,n));
    x = m*(1-pow(0.5,(n-1)));
    printf("%.4lf\n",s+x);

return 0;
}

**/

//第二种方法 用过程来推
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    double m = 100, sum=0, M;
    M = m;
    scanf("%d",&n);
    while(n!=0){
        sum = sum + 2*m;
        n--;
        m = m / 2;
    }
    sum = sum - M;
    printf("%.4lf\n",sum);
return 0;
}
