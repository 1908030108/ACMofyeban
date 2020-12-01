#include <bits/stdc++.h>

using namespace std;
//set(n)=1+¦²(i=1-->n/2)set(i);

int main(void)
{
     int n, a[1000], j;
     a[1] = 1;  a[2] = 2; a[3] = 2;
     for(int i = 4; i<= 1000; i++){
        int temp = 0;
        for(j = 1; j <= i/2; j++)
            temp = a[j] + temp;
        a[i] = temp+1;
     }
     while(~scanf("%d",&n)){
        printf("%d\n",a[n]);
     }
}
