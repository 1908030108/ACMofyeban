#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    while(n--){
       int a, b;
       scanf("%d%d",&a,&b);
       if(a+b >= 100)
        printf("%d\n",(a+b)%100);
       else
       printf("%d\n",a+b);
    }
return 0;
}
