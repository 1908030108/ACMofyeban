#include <stdio.h>

int f(int x){
    if(x==1) return 10;
    else return f(x-1)+2;
}

int main(void){
    int x;
    scanf("%d",&x);
    printf("%d\n",f(x));
return 0;
}
