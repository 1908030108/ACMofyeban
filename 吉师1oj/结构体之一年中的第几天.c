#include <stdio.h>
struct tianshu{
     int year;
     int month;
     int day;
}t;
int main(void){
    int a[13] ={0,31,0,31,30,31,30,31,31,30,31,30,0};
    int days =0;
    struct tianshu t;
    scanf("%d%d%d",&t.year,&t.month,&t.day);
    if((t.year % 4 == 0) &&( t.year % 100 != 0) || (t.year%400==0)){
        a[2] = 29;
    }
    else a[2] = 28;
    for(int i = 1; i < t.month;i++){
        days = a[i] + days;
    }
    days = days + t.day;
    printf("%d\n",days);
return 0;
}
