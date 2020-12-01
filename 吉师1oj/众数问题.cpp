#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, i, sum = 0, t;
    int a[1000];
    int b[1000] = {0};
    scanf("%d",&n);
    for(i = 0;i < n; i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(i = 0; i < n; i++){
        if(sum< b[a[i]]){
            sum = b[a[i]];
            t = a[i];
        }
    }
    printf("%d\n%d\n",t,sum);
  //  sort(a, a+n);
//    for(i = 0;i < n; i++)
//        printf("%d ",a[i]);


return 0;
}
