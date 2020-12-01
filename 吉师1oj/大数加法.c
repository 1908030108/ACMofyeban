#include <stdio.h>
#include <string.h>
#define M 1005

char s1[M],s2[M];
int  a[M],b[M],c[M];

int max(int a, int b){
   if(a > b) return a;
   else return b;
}

int main(){
    int i, j, n, m, k;
    scanf("%s%s",s1,s2);
        memset(c,0,sizeof(c));
        n = strlen(s1);
        m = strlen(s2);
        for(i = 0; i < n; i++)
            a[i] = s1[n-i-1]-'0';
        for(j = 0; j < m; j++)
            b[j] = s2[m-j-1]-'0';
        for(i = 0; i < max(n, m); i++)
            c[i] = a[i] + b[i];
        for(i = 0; i <= max(n, m); i++){
            if(c[i] >= 10){
                c[i+1] += c[i]/10;
                c[i] = c[i] % 10;
            }
        }
        i = max(n, m);
        while(c[i] == 0) i--;
        if(i < 0) printf("0");
        for(; i >= 0; i--)
            printf("%d",c[i]);
        printf("\n");
return 0;
}
