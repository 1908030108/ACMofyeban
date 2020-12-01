#include <stdio.h>
#include <string.h>

int main(void){
    char c;
    int a, b;
    int t;
    scanf("%d", &t);
    while(t--){
        getchar();
        scanf("%c",&c);
        scanf("%d%d",&a,&b);
        if(c == '+')
            printf("%d",a+b);
        if(c == '-')
            printf("%d",a-b);
        if(c == '*')
            printf("%d",a*b);
        if(c == '/'){
           if(a % b == 0)
            printf("%d",a /b );
           else
            printf("%.2llf",(double)a/(double)b);
        }
        printf("\n");
    }
return 0;
}
