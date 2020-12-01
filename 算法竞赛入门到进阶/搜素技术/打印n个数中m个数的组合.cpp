#include <bits/stdc++.h>

using namespace std;

//我只想说，位运算真他妈难， 用公式他不香

void print_set(int n, int m){
      long long sum = 0;
     for(int i = 0; i <(1<<n); i++){
        int num = 0, mm=i;
        while(mm){
            mm = mm &(mm-1);
            num++;
        }
        if(num == m){
//            for(int j = 0; j < n; j++)
//                if(i & (i <<j))
//                cout<<j<<' ';
//            cout<<endl;
             sum++;
        }
       //
     }
      cout<<sum<<endl;
}

int main(void){
    int n, m;
    while(cin>>n>>m)
    print_set(n, m);
return 0;
}
