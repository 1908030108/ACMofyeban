#include <stdio.h>
//Financial Management
int main(void){
    double a[12], sum;
    int i;
    sum = 0;
    for(i = 0; i < 12; i++){
        scanf("%lf",&a[i]);
        sum = sum + a[i];
    }
    printf("$%.2lf\n", sum / 12.0);
return 0;
}
