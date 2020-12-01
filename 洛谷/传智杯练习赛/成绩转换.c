#include <stdio.h>
#define M 1000000

double a[M];

int main(){
    int n, i;
    double max, min, sum, avg, s;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
        scanf("%lf",&a[i]);
    max = min = a[0];
    sum = 0;
    for(i = 0; i < n; i++){
        sum = sum + a[i];
       if(max <= a[i]) max = a[i];
       if(min >= a[i]) min = a[i];
       if(i >= 2){
        s = sum;
        s = s - max - min;
        avg = s / (i-1);
        printf("%.2lf\n",avg);
       }
    }
return 0;
}
