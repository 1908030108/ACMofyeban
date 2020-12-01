#include <stdio.h>

int a[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int year,day, mon, days;
    char month[4];
    scanf("%d",&day);
    scanf("%c%c%c",month[0],month[1],month[2]);
    scanf("%d",&year);
    if(strcmp(month,"fil") == 0) return 0;
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
    if(year < 1582)
    {
        if(year % 4 == 0)
            a[2] = 29;
        else
            a[2] = 28;
    }
    else
    {
        if(year % 4 == 0 && (year % 100 == 0 || year % 400 != 0))
            a[2] = 29;
        else
            a[2] = 28;
    }

    if(year < 1582)
    {
        days = 0;
        for(int i = 1; i < mon; i++)
        {
            days = days + a[i];
        }
        days = days + day - 1;
    }
    else if(year == 1582)
    {
        if(mon >= 10 && day <= 4)
        {
            for(int i = 1; i < mon; i++)
            {
                days = days + a[i];
            }
            days = days + day - 1;
        }
        else
        {
            for(int i = 1; i < mon; i++)
            {
                days = days + a[i];
            }
            days = days + day - 11;
        }
    }
    else
    {
        for(int i = 1; i < mon; i++)
        {
            days = days + a[i];
        }
        days = days + day - 11;
    }
    printf("%d\n",days);
    return 0;
}
