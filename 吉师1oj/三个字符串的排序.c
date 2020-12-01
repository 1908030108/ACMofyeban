#include <stdio.h>
#include <string.h>

int main(void){
    char a[3][120], temp[120];
    int i, j, n;
    for(i = 0;i < 3; i++){
        scanf("%s",a[i]);
    }
    for(i = 0;i < 3; i++){
        for(j = i+1; j < 3;j++){
    //比较字符串的大小函数
            if(strcmp(a[i],a[j]) >0){   //strcmp() 字符串比较函数
                  strcpy(temp,a[i]);      //strcpy()  字符串赋值函数
                  strcpy(a[i],a[j]);
                  strcpy(a[j],temp);
            }
        }
    }
    for(i = 0; i < 3; i++){
          printf("%s",a[i]);
          printf("\n");
    }

return 0;
}
