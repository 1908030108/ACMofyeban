#include <stdio.h>
#include <string.h>

int main(void){
    char q[266];
    int p[266];
    int i, n;
    long long sum;
    while(gets(q)){
        if(q[0] == '#') break;
        sum = 0;
        n = strlen(q);
        for(i = 0; i < n; i++){
            if(q[i] == ' ') p[i] = 0;
            else p[i] = q[i] - 'A' + 1;
            sum = sum + p[i]*(i+1);
        }
        printf("%lld\n",sum);
    }
return 0;
}
