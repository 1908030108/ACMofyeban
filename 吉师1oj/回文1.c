#include <stdio.h>

int rev(int m){
   int y = 0;
   while(m){
    y = y * 10 + m % 10;
    m = m /10;
   }
   return y;
}
int main(void){
    int l, m;
    scanf("%d",&l);
    while(l--){
        int i = 0;
        scanf("%d",&m);
        do{
        int t = rev(m);
        if(t == m){
            printf("%d\n",i);
            break;
        }
        m = m + t;
        i++;
        }while(i <= 8);
        if(i > 8)
        printf("0\n");
    }
return 0;
}
