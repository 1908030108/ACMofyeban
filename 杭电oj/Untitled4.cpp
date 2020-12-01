#include <cstdio>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
long long int a[10000010];

int main(){
     int n;
    while (~scanf("%d",&n) && n)
    {
        for (int i = 0; i<n; i++)
            scanf("%lld",&a[i]);
        sort(a, a+n);
        int i;
        int num = 0;
        for(i = 1; i < n; i++){
            if(a[i] != a[i-1]){
                if(num%2!=0){
                   printf("%d\n",a[i]);
                   break;
                }
                else num = 1;
            }
            else
                num++;
        }

    }
    return 0;
return 0;}
