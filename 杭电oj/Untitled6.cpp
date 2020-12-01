#include <cstdio>
#include <iostream>

using namespace std;

int a[1000010];

int main(){
    int n, i, sum, t= 0;
    while(~scanf("%d",&n)&&n){
        if(t++) printf("\n");
            sum = 0;
        for(i = 0; i < n; i++){
            scanf("%d",&a[i]);
            sum += a[i];
        }
        int avg = sum / n;
        int temp = 0;
        for(i = 0; i < n; i++)
        if(a[i] > avg){
            temp = temp + (a[i] - avg);
        }
        printf("%d\n",temp);
    }
return 0;
}
