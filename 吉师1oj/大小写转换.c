#include <stdio.h>
#include <string.h>

int main(void){
    char a[300];
    while(gets(a)){
        int n = strlen(a);
        for(int i = n-1;i>=0;i--){
           printf("%c",a[i]);
        }
    }
return 0;
}
