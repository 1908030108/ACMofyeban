#include <stdio.h>
#include <string.h>
#define M 1000
char a[M];
int main(){
    int n, i;
    long long b = 0;
    scanf("%s",a);
    n = strlen(a);
    for(i = n-1; i>=1; i--)
        b = b*10 + (a[i] - '0');
    if(a[0] == '-')
        printf("-");
    else
       b = b * 10 + (a[0]-'0');
    printf("%lld\n",b);
return 0;
}
