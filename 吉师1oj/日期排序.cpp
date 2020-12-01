#include <bits/stdc++.h>

using namespace std;

typedef struct data{
    int day;
    int month;
    int year;
};

int main(void){
    int i = 0;
    data d[100];
    while(~scanf("%d%d%d",&d[i].month, &d[i].day,&d[i].year)){
        i++;
    }
    sort(d,d+1);
    for(int j = 0; j <i; j++){
        printf("%02d/%02d/%d",d[j].month,d[j].day,d[j].year);
    }

}


