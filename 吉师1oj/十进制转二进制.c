#include <stdio.h>
#include <math.h>

int main(void){
    int n, i, r;
    int a[1000];
    while(~scanf("%d",&n)){
        int m = n;
        int i = 0;
        if(n == 0){
            printf("%11d",m);
            printf("-->");
            printf("0\n");
            continue;
        }
        int h = fabs(n);
        while(h){
            a[i++] =h%2;
            h/=2;
        }
        printf("%11d",m);
        printf("-->");
        if(m < 0)
            printf("-");
        for(int j=i-1; j >=0; j--){
            printf("%d",a[j]);
        }
        printf("\n");
    }
return 0;
}
