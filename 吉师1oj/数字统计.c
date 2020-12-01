#include <stdio.h>

int main(void){
    int  a[10]={0},n;
    scanf("%d",&n);
    for(int i = 0; i <= n; i++){
         int j = i;
         while(j){
            a[j%10]++;
            j/=10;
         }
    }
    for(int i = 0; i < 10; i++)
        printf("%d\n",a[i]);
return 0;
}
