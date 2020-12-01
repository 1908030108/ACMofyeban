#include <stdio.h>

int main(void){
    char a[1000];
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        gets(a);
        puts(a);
        printf("\n");
    }
    while(scanf("%s",a)!=EOF){
         printf("%s\n",a);
         printf("\n");
    }
return 0;
}
