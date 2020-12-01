#include <stdio.h>

int main(void){
    float sum = 0, mul = 1;
    for(int i = 1; i <= 30;i++){
            mul = mul * i;
            sum = sum + mul;
    }
    printf("%.2e\n",sum);
return 0;
}
