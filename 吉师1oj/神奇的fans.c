#include <stdio.h>

int main(void){
    int n,i,t, j;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&t);
        int a[t];
        for(i = 0; i < t; i++)
            scanf("%d",&a[i]);
        for(i = 0; i < t-1; i++){
            for(j = 0; j<t-i-1; j++){
                if(a[j] > a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        int flag = 1;
        int d = a[1] - a[0];
        for(i = 0; i < t-2; i++){
            if(a[i+1]-a[i] != d){
                flag = 0;
                break;
            }
        }
        if(flag == 0) printf("no\n");
        else printf("yes\n");
//            printf("%d ",a[i]);
    }
return 0;
}
