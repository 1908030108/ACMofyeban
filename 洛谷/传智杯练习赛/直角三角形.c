#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    int flag = 0;
    scanf("%d",&c);
    for(a = 1; a <= c; a++){
        for(b = 1; b <= c; b++)
            if(a * a + b * b == c * c){
                  printf("%d %d",a, b);
                  flag = 1;
            }
        if(flag == 1) break;
    }
    printf("\n");
return 0;
}
