#include <stdio.h>
#include <math.h>
#define M 10000

int abs(int n){
    if(n < 0) return -n;
    else return n;
}
int a[M];
int main(void)
{
    int n, i;
    while(~scanf("%d",&n)){
        int flag = 0;
       for(i = 0; i < M; i++)
          a[i] = 0;
       for(i = 0; i < n; i++)
            scanf("%d",&a[i]);
       for(i = 1; i < n; i++){
        if((abs(a[i])-abs(a[i-1])) <= 0 || (abs(a[i])-abs(a[i-1])) >= n){
              flag = 1;
              break;
        }
       }
       if(flag == 0) printf("Jolly\n");
       else printf("Not Jolly\n");
    }
return 0;
}
