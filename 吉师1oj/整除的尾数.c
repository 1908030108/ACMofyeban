#include <stdio.h>

int main(void){
     int a, b;
     while(~scanf("%d%d",&a,&b)){
            int t = 0;
        if(a == 0 && b==0) {
            return 0;
        }
            int m = a;
         for(int i = 0; i < 100; i++){
           m = m*100 + i;
            if(m % b==0){
                t++;
            }
              m = a;
         }
         for(int i = 0;i < 100; i++){
            m = m*100 + i;
            if(m % b==0){
                t--;
              if(i < 10)
              printf("0%d",i);
              else
              printf("%d", i);
              if(t > 0)
                printf(" ");
            }
              m = a;
         }
         printf("\n");
     }
return 0;
}
