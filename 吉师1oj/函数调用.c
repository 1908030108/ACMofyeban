#include <stdio.h>

double fact(int i){
    double s = 1;
     for(int j = 1; j <= i; j++)
        s = s*j;
     return s;
}

int main(){
    int n;
    scanf("%d",&n);
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + 1.0/fact(i);
    }
    printf("sum=%.5f\n",sum);
return 0;
}
