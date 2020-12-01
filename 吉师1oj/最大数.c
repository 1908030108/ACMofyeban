#include <stdio.h>

int main(void){
     int i, max;
     max = -10001;
     while(~scanf("%d",&i) && i != -1){
        if(i > max) max = i;
     }
     printf("%d\n",max);
return 0;
}
