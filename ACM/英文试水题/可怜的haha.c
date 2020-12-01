#include <stdio.h>
//如果m , n 互为质数则成立（注意，可以不找m-1个人,找人时也要跳过m-1个人）
int zzfc(int n,int m){
    int k;
    while(m != 0){
        k = m;
        m = n % m;
        n = k;
    }
    return k;
}

int main(void){
    int n, m;
    while(~scanf("%d%d",&n,&m)&&m != -1 && n != -1){
          if(zzfc(n, m) == 1) printf("YES\n");
          else printf("POOR Haha\n");
    }
return  0;
}


