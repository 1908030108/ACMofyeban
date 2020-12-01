#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(void){
    int a, b;
    scanf("%d%d",&a,&b);
    printf("%d",(a*b)/__gcd(a, b));
return 0;
}
