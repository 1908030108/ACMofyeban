#include <stdio.h>
#include <string.h>
#define M 10001

int a[M];

void print_factorial(int n){
     int i, j, temp, digit;  //temp 为每次得到的次数，digit 为每次得到的位数
     a[0] = 1;
     digit = 1;
     for(i = 2;i <= n; i++){
        int num = 0;
        for(j = 0; j < digit; j++){
            temp = a[j]*i + num;
            a[j] = temp % 10;
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
   int n;
   scanf("%d",&n);
   print_factorial(n);
return 0;
}
