#include <stdio.h>
#define M 1000
// 2 �ı����� 3 �ı����� 5�ı����� 7�ı���������
int main(){
    int i, j, c = 0;
    int prime[M+1];
    for(i=2; i <= M; i++){
        prime[i] = 1;
    }
    for(i = 2;i * i < M; i++){
        if(prime[i] == 1){
            for(j = 2*i; j <= M; j++){
                if(!prime[i]) continue;
                if(j%i == 0)  prime[j] = 0;
            }
        }
    }
     int num = 0;
    for(i = 2; i < M; i++)
    {
        if(prime[i] == 1)
        {
            printf("%4d ",i);
            c++;
            num++;
        }
        if(c==10){
            c = 0;
            printf("\n");
        }
    }
    printf("\n����%d��������",num);
return 0;
}
