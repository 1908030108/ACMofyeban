#include <stdio.h>

int main(void){
    int i,n, m;
    scanf("%d",&n);
    getchar();
     char a[n];
     for(i = 0;i < n; i++)
        scanf("%c",&a[i]);
     scanf("%d",&m);
     for(i = m-1;i < n; i++)
        printf("%c",a[i]);
     printf("\n");

 return 0;
}
