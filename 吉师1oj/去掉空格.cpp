#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main(void){
    char str[1000];
    while(gets(str)!='\n'){
        int n = strlen(str);
        for(int i =0; i < n; i++){
            if(str[i] == ' ') continue;
            printf("%c",str[i]);
        }
        printf("\n");
    }
return 0;
}
