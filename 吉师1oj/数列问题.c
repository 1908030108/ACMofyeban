#include <stdio.h>

int main(void){
    int i, a[50];
    int n;
    a[1] = 3, a[2] = 4, a[3] = 5;
    for(i = 4; i <= 35; i++)
        a[i] = a[i-3]+a[i-2]+a[i-1];
    while(scanf("%d",&n)!=EOF){
         printf("%d\n",a[n]);
    }
return 0;
}
