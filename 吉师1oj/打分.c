#include <stdio.h>

int main(void){
    int n, max, min, sum;
    int a[1000];
    while(~scanf("%d",&n)){
       for(int i =0; i < n; i++)
        scanf("%d",&a[i]);
         max = a[0];
         min = a[0];
         sum = 0;
        for(int i = 1; i < n; i++){
            if(a[i] > max) max = a[i];
            if(a[i] < min) min = a[i];
        }
        for(int i= 0;i < n; i++){
            sum = sum + a[i];
        }
         sum = sum-(max+min);
        printf("%.2f\n", (sum*1.0)/(1.0*(n-2)));
    }
return 0;
}
