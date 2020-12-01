#include <stdio.h>
int count(int n)
{
    int i=0;
    do
    {
        n=n/10;
        i++;

    }
    while(n!=0);
    return i;
}
int main(void){
    int a[100] = {0};
    int n;
    scanf("%d",&n);
    int sum = count(n);
    for(int j = 0; j < sum;j++){
        a[j] = n % 10;
        n = n / 10;
    }
   printf("%d\n",sum);

    for(int i = sum-1; i >=0; i--){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i = 0; i < sum;i++){
        printf("%d",a[i]);
    }
    printf("\n");
return 0;
}
