#include <stdio.h>
#include <string.h>

int main(void){
    char a[1000];
    int i, n, t, k, j;
    scanf("%d",&t);
    getchar();
    while(t--){
      memset(a, 0, 1000);
        gets(a);
      n = strlen(a);
    for(i = 0; i <=n; i++){
        if(a[i]==' ' || i==n){
            for(j = i-1; j!=k&&j>=0; j--){
                putchar(a[j]);
            }
            k = i;   //到k处截止 k即为空格
            if(i != n)
            putchar(' ');
        }
     }
     printf("\n");
    }
return 0;
}
