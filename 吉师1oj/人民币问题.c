#include <stdio.h>

int main(void){
    int x;
    int a, b, c;
    int sum = 0;
    scanf("%d",&x);
    for(a = 1; a <= x; a++){
        for(b = 1; b <= x/2; b++){
            for(c = 1; c <= x/5; c++)
                if(a + 2*b + 5*c == x)
                sum++;
        }
    }
    printf("%d\n",sum);
return 0;
}
