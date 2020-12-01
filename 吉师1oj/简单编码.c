#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char ch[1000], end[8] = {"END"};
    int i;
    while(gets(ch)){
         if(strcmp(ch, end) == 0) return 0;
         int n = strlen(ch);
         for(i = 0; i < n; i++){
//         （1） 如果访问到字符A，W，F就转化成I；
         if(ch[i] == 'A'|| ch[i] == 'W' || ch[i] == 'F')
            ch[i] = 'I';
//         （2） 如果访问到字符C，M，S就分别转化成L，o，v；
         else if(ch[i] == 'C')
            ch[i] = 'L';
         else if(ch[i] == 'M')
            ch[i] = 'o';
         else if(ch[i] == 'S')
            ch[i] = 'v';
        else if(ch[i] == 'D'|| ch[i] == 'P' || ch[i] == 'G' || ch[i] == 'B')
            ch[i] = 'e';
         else if(ch[i] == 'L')
            ch[i] = 'Y';
        else  if(ch[i] == 'X')
            ch[i] = 'u';
      }
      puts(ch);
    }
return 0;
}
