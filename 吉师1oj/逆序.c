#include <stdio.h>
#include <string.h>

int main(){
    char a[105];
    int n, i;
    gets(a);
    n = strlen(a);
    for(i = n-1; i >= 0; i--)
      printf("%c",a[i]);
      printf("\n");
    return 0;
}
