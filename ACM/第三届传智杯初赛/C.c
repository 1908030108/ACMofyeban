#include <bits/stdc++.h>

using namespace std;

const int maxn = 5e5+7;

struct node {
     int id, t, k;
     bool operator < (const node &c){
         if(t * k != c.t * c.k) return (t*k)> (c.t*c.k);
         else if(t != c.t) return t > c.t;
         else return id < c.id;
     }
};

node a[maxn];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        int t, k;
        scanf("%d%d",&t,&k);
        a[i] = {i, t, k};
    }
    sort(a+1, a+1+n);
    for(int i = 1; i <= n; i++)
        printf("%d ",a[i].id);
    return 0;
}
