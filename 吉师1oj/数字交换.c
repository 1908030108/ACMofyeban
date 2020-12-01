#include <stdio.h>
#include <math.h>

int main(){
    int a[10], i, t, min;
    for(i = 0; i < 10; i++)
        scanf("%d",&a[i]);
    min = a[0];
    for(i = 1; i < 10; i++)
        if(abs(a[i]) < abs(min))
          {
              min = a[i];
              t = i;
          }
    if(t != i){
    int tem = a[t];
        a[t] = a[9];
        a[9] = tem;
    }
    for(i = 0; i < 10; i++)
        printf("%d ",a[i]);
    printf("\n");
return 0;
}
