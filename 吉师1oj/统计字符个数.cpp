#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(void){
    char a;
    int c[26] = {0};
    while(scanf("%c",&a)){
       if(a == '#')
            break;
            c[a-97]++;
    }
     for(int i = 0; i < 26; i++){
        printf("%c %d",97+i, c[i]);
        printf("\n");
      }
return 0;
}
