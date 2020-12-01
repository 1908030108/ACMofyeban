#include <stdio.h>

int main(){
    int x=0, y=0, z=0, a;
    while(~scanf("%d",&a)){
        if(a == 0) break;
        else if(a >= 85) x++;
        else if(a >= 60) y++;
        else z++;
    }
    printf(">=85:%d\n\
60-84:%d\n\
<60:%d\n",x,y,z);
return 0;
}
