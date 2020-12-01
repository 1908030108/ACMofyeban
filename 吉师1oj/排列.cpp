#include <bits/stdc++.h>
#define N 4
using namespace std;

//int a[4];

//void f(int a[]){
//
//}
int main(void){
    int n, i;
    int a[N]={0};
    scanf("%d",&n);
    while(n--){
        for(i = 0; i < N; i++){
            cin>>a[i];
        }
        sort(a, a+N);
        int j = 0;
        do{
            for(i = 0;i < N; i++)
                cout<<a[i];
            if(j != 5)  cout<<" ";
            j++;
            if(j == 6){
            printf("\n");
            j = 0;
            }
        }while(next_permutation(a, a+N));
        if(n != 0)
        printf("\n");
        memset(a, 0, N);
    }
return 0;
}
