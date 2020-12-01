#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rev(int m, int base){
     int y = 0;
     while(m){
        y = y*base + m%base;
        m = m/base;
     }
     return y;
}
int main(void){
    char str[100];
    int base, m;
    int s = 30, i = 0;
    scanf("%d",&base);
    scanf("%s",str);
    m = strtol(str, 0, base);
    do{
        int t = rev(m, base);
        //printf("%d\n",t);
        if(m == t){
            printf("STEP=%d\n",i);
            return 0;
        }
        m = m +t ;
        i++;
    }while(i <= s);
    printf("Impossible!\n");
return 0;
}
