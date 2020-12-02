#include <stdio.h>

int main(void){
    int n,a,b;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&a,&b);
        int flag = 1;
        while(b--){
            for(int i=0; i<a; i++)
               if(i!=0 || flag)
            {
            for(int j=0; j<a; j++)
               if(j==i || j==a-i-1)
                    printf("X");
                else
                printf(" ");
            printf("\n");
            flag = 0;
            }
        }
        if(n!=0)
                printf("\n");
    }

return 0;
}
