#include <stdio.h>
//#define PI 3.1415

int main(void){
    int n;
    scanf("%d",&n);
    while(n--){
        double PI = 3.1415;
        double r;
        scanf("%lf",&r);
        printf("%.6lf\n",r*r*PI);
    }
return 0;
}
