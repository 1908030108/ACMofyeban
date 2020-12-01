#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(void){
        int a, b;
        while(cin>>a>>b){
            if(a == 0 &&b==0) return 0;
            int c =0,ans = 0;
            while(a!=0|| b!=0){
                 c=(a%10)+(b%10)+c>9?1:0;  //注意这里后面一定要加上上一次运算产生的进位，这个技巧也用的很好 = =
                 ans+=c;
                 a/=10;
                 b/=10;
            }
            if(ans == 0) cout<<"No carry operation."<<endl;
            else if(ans == 1) cout<<"1 carry operation."<<endl;
            else  cout<<ans<<" carry operations."<<endl;
        }
return 0;
}
