#include <stdio.h>
#include <math.h>

int main(){
    int x;
    float gpa = 4;
    scanf("%d",&x);
    if(x >= 90) printf("%.1f",gpa);
    else if(x >= 60){
        gpa = gpa - ((90 - x) * 0.1);
        printf("%.1f",gpa);
    }
    else{
         x = pow(x, 0.5) * 10;
         if(x < 60)
            printf("0.0");
         else{
         gpa = gpa - ((90 - x) * 0.1);
         printf("%.1f",gpa);
         }
    }
    printf("\n");
return 0;
}

