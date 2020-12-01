#include <stdio.h>
#include <string.h>

int main(void){
    int a, b, c, d, k;
    char s[100];
    char end[100] = {"End of file"};
    while(~(k=scanf("%d.%d.%d.%d",&a,&b,&c,&d))){
        gets(s);
        if(strcmp(s,end)==0) return 0;
        if(k == 4 && a >= 0 && a <= 255 && b >= 0 && b <=255 && c >= 0 && c<= 255 &&d >= 0 && d <= 255)
            printf("Y\n");
        else
            printf("N\n");
        fflush(stdin);
    }
return 0;
}
