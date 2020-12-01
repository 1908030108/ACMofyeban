#include <stdio.h>
int main(){
	int n,t=0;
	while(scanf("%d",&n)!=EOF&&n!=0){
		if(t++) printf("\n");
		int sum=0,a[1000],i,sum1=0,average;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		average=sum/n;
		for(i=0;i<n;i++){
			if(a[i]>=average)
			sum1=sum1+a[i]-average;
			else
			sum1=sum1+average-a[i];
		}
		printf("%d\n",sum1/2);
	}
}

