#include <stdio.h>
#include <string.h>

int main(void){
    char a[10000];
    while(gets(a)){
        int n = strlen(a);
        for(int i = 0; i < n; i++){
            if(a[i] == '1') a[i] = '0';
            else a[i] = '1';
        }
        for(int i = 0; i < n; i++)
            printf("%c",a[i]);
        printf("\n");
    }
return 0;
}
