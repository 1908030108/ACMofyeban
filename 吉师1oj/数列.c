#include <stdio.h>

// k ��i �η������Ϊ�ֱ���ǰ�����ĺ�
int fun(int k, int i){
    int j = 1, p = 1;
    for(; j<=i; j++){
        p = p * k;
    }
    return p;
}

int main(void){
    int k, n;
    int i, j, c;
    int  count = 1;
    int a[1005] = {0};
    scanf("%d%d",&k, &n);
    a[count++] = 1;
    a[count++] = k;
    a[count++] = 1+k;
    for(i = 2; count <= n; i++){
        a[count++] = fun(k, i);
        c = count-1;
        for(j = 1;j < c && count <= n;j++){
            a[count++] = a[j] + a[c];
        }
    }
    printf("%d\n",a[n]);
return 0;
}


