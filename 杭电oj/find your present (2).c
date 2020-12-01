#include <stdio.h>
#include <string.h>
#define M 1000010

long long  a[M];

int main(){
    int  num, i,j,n,temp;
    while(~scanf("%d",&n)&&n!= 0){
          for(i = 0;i < n; i++)
            scanf("%lld",&a[i]);
//          for(i = 0; i < n; i++){
//            for(j = 0; j < n-i-1; j++){
//                if(a[j] > a[j+1]){
//                    temp = a[j];
//                    a[j] = a[j+1];
//                    a[j+1] = temp;
//                }
//            }
//          }
//		for (i = 1; i<n; i++)
//		{
//			if (a[i] != a[i-1]  &&  a[i] != a[i+1])
//				break;
//		}
//		printf("%lld\n",a[i]);
	}
	return 0;
}

