#include <bits/stdc++.h>

using namespace std;

bool huiwen(char *ch, int i, int j){
      int m, n;
      for(m = i, n = j; m < n; m++,n--){
        if(ch[m] != ch[n]) break;
      }
      if(m < n) return false;
      return true;
}

int main(void){
    char ch[10000];
    int i, j, mmax;
    while(gets(ch)){
        mmax = 1;
        int n = strlen(ch);
        for(i = 0; i < n; i++){
            for(j = i; j < n; j++){
                if(huiwen(ch,i,j)){
                    mmax = mmax>j-i+1?mmax:j-i+1;
                }
            }
        }
        cout<<mmax<<endl;
    }
return 0;
}



