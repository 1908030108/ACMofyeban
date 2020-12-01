#include <bits/stdc++.h>

using namespace std;

int main(void){
    int i, k, n=1e9;
    k = 0;
    clock_t start, end;
    start = clock();
    for(i = 0; i < n; i++) k++;
    end = clock();
    cout<<(double)(end-start)/CLOCKS_PER_SEC<<endl;

}
