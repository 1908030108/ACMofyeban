#include <bits/stdc++.h>

using namespace std;

struct D{
     int year;
     int month;
     int day;
};

int main(void){
    struct D d;
    int a[13] = {0,30,0, 31, 30, 31, 30, 31,31, 30, 31 , 30, 31};
    while(~scanf("%d/%d/%d",&d.year,&d.month,&d.day)){
        int days = 0;
        a[2] = 0;
        if(d.year%4==0&&d.year%100!=0 ||d.year % 400 == 0){
            a[2] = 29;
        }else{
            a[2] = 28;
        }
        if(d.year == 2006)
            a[2] = 29;
        for(int i = 1; i < d.month; i++){
            days = days + a[i];
        }
      days = days + d.day;
      printf("%d\n",days);
    }
return 0;
}
