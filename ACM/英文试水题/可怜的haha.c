#include <stdio.h>
//���m , n ��Ϊ�����������ע�⣬���Բ���m-1����,����ʱҲҪ����m-1���ˣ�
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


