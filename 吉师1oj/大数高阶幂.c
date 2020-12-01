#include <stdio.h>
#include <string.h>
#define M 10005
//¼ÆËãn µÄ m´ÎÃÝ
int a[M];

void print_mi(int n, int m){
     a[0] = 1;
     int i, j, temp, digit = 1, num = 0;
     for(i = 1;i <= m; i++){
         num = 0;
         for(j = 0; j < digit; j++){
             temp = a[j]*n+num;
             a[j] = temp%10;
             num = temp/10;
         }
         while(num){
            a[digit] = num%10;
            num /= 10;
            digit++;
         }
     }
     for(i = digit - 1;i >= 0; i--){
        printf("%d",a[i]);
     }
     printf("\n");
}

int main(void){
    int n, m;
    scanf("%d%d",&n,&m);
    print_mi(n, m);
return 0;
}
