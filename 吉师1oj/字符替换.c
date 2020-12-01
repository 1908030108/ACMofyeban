#include <string.h>
#include <stdio.h>
int main(void){
    char a[10000];
    char s[10] = {"%20"};
    int length;
    gets(a);
    length = strlen(a);
    for(int i =0; i < length; i++){
        if(a[i] == ' ')
            printf("%s",s);
        else
            printf("%c",a[i]);
    }
return 0;
}
