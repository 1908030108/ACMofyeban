#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void){
    int a[1005], b[1005];
    int amax, amin, bmax,bmin;
    int i, j, m, n;
       cin>>m>>n;
    for(i = 0; i <m; i++)
       cin>>a[i];
    for(j = 0; j < n; j++)
        cin>>b[j];
//    amin = a[0];
//    amax = a[m-1];
//    bmin = b[0];
//    bmax = b[n-1];
//    for(j = 1; j < n; j++){
//        if(b[j] > bmax) bmax = b[j];
//        if(b[j] < bmin) bmin = b[j];
//    }
    for(i = 0; i < m;i++){
        for(j = 0; j < n;j++)
            if(a[i] == b[j]){
                cout<<0<<endl;
                return 0;
            }
    }
    amax = min(a[m-1], b[n-1]);
    amin = max(a[0], b[0]);
    cout<<abs(amax-amin)<<endl;
return 0;
}
