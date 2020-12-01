#include <stdio.h>
#include <string.h>

int main(void){
    char zifu[800];
    char cha[10] = {"(max)"};
    while(gets(zifu)){
        int n = strlen(zifu);
        char max = '0';
        for(int i = 0; i < n; i++){
            if(zifu[i] > max) max = zifu[i];
        }
        for(int i = 0; i < n; i++)
           if(zifu[i] == max){
            printf("%c",zifu[i]);
            printf("%s",cha);
           }
           else
            printf("%c",zifu[i]);
     printf("\n");
    }
return 0;
}
