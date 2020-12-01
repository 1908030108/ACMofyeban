#include <stdio.h>
int leap(int Y)
{

    if((Y%4==0&&Y%100!=0)||Y%400==0)
        return 1;
    else
        return 0;
}
int year[2][12]= {{31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31}};
int main()
{
    int Y,D,day,mon;
    char month[5];
    int flag=0;
    while(scanf("%d%s%d",&Y,month,&D)!=EOF)
    {
        if(strcmp(month, "JAN") == 0) mon = 1;
        if(strcmp(month, "FEB") == 0) mon = 2;
        if(strcmp(month, "MAR") == 0) mon = 3;
        if(strcmp(month, "APR") == 0) mon = 4;
        if(strcmp(month, "MAY") == 0) mon = 5;
        if(strcmp(month, "JUN") == 0) mon = 6;
        if(strcmp(month, "JUL") == 0) mon = 7;
        if(strcmp(month, "AUG") == 0) mon = 8;
        if(strcmp(month, "SEP") == 0) mon = 9;
        if(strcmp(month, "OCT") == 0) mon = 10;
        if(strcmp(month, "NOV") == 0) mon = 11;
        if(strcmp(month, "DEC") == 0) mon = 12;

        return 0;
    }
