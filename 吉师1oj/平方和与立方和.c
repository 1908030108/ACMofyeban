#include <stdio.h>
#include <math.h>
int main(void){
    int n, m, x;
    while(~scanf("%d%d",&n,&m)){
        int psum, lsum;
        psum = lsum = 0;
        for(x = n; x <=m; x++){
            if(x % 2 == 0)psum = psum +pow(x, 2);
            else lsum = lsum + pow(x,3);
        }
        printf("%d %d\n",psum, lsum);
    }
return 0;
}
