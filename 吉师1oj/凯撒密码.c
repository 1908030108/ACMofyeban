#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char a[1000], b[100] = {"ENDOFINPUT"};
    char c[100] = {"START"}, d[100] = {"END"};
    while(gets(a)){
        if(strcmp(a, b) == 0) return 0;
        if(strcmp(a, c) == 0){
        if(strcmp(a, d) == 0){
             memset(a, 0, 1000);
             continue;
           }
           memset(a, 0, 1000);
           gets(a);
           for(int i = 0; i < strlen(a); i++){
            if(a[i]>='A' && a[i]<='E')
               a[i] = a[i] + 21;
            else if(a[i] >= 'F' && a[i] <= 'Z')
                 a[i] = a[i] - 5;
           }
           for(int i =0;i < strlen(a); i++)
                printf("%c",a[i]);
           printf("\n");
        }
    }

return 0;
}
