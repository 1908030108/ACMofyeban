#include <stdio.h>
#include <string.h>

int main(void){
    char str[1000];
    char end[1000] = {"End of file"};
    while(gets(str)){
        if(strcmp(str,end)==0) return 0;
        int n = strlen(str);
        if(n > 80) return 0;
        for(int i = 0; i < n; i++){
            if(str[i] == ' ') continue;
            printf("%c",str[i]);
        }
        printf("\n");
    }
return 0;
}
