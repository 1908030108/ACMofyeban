#include <stdio.h>
#define N 500

int main(void){
    int i, j, a[N] = {0};
    for(i = 0; i <= 4; i++){
        for(j = 0; j <= 3; j++)
            if(i == 0 && j == 0) continue;
            else{
               a[3*i + 5*j] = 1;
            }
    }
    int s = 0;
    for(i = 0; i < N; i++)
        if(a[i] != 0)
        s++;
    printf("%d\n",s);
}
