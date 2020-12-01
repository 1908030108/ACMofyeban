#include <stdio.h>
int main()
{
    double a,b;
    char s[10];
    while(scanf("%lf%s",&a,s)!=EOF)
    {
        if(s[0]=='G'&&s[1]=='B'&&s[4]=='M'&&s[5]=='B')
            {b=1024.0*a;printf("%.6lf\n",b);}
        if(s[0]=='G'&&s[1]=='B'&&s[4]=='G'&&s[5]=='B')
            {b=a;printf("%.6lf\n",b);}
        if(s[0]=='M'&&s[1]=='B'&&s[4]=='M'&&s[5]=='B')
            {b=a;printf("%.6lf\n",b);}
        if(s[0]=='K'&&s[1]=='B'&&s[4]=='K'&&s[5]=='B')
            {b=a;printf("%.6lf\n",b);}
        if(s[0]=='B'&&s[3]=='B')
            {b=a;printf("%.6lf\n",b);}
        if(s[0]=='G'&&s[1]=='B'&&s[4]=='K'&&s[5]=='B')
            {b=1024.0*1024.0*a;printf("%.6lf\n",b);}
        if(s[0]=='G'&&s[1]=='B'&&s[4]=='B')
            {b=1024.0*1024.0*1024.0*a;printf("%.6lf\n",b);}
        if(s[0]=='M'&&s[1]=='B'&&s[4]=='G'&&s[5]=='B')
            {b=a/1024.0;printf("%.6lf\n",b);}
        if(s[0]=='M'&&s[1]=='B'&&s[4]=='K'&&s[5]=='B')
            {b=1024.0*a;printf("%.6lf\n",b);}
        if(s[0]=='M'&&s[1]=='B'&&s[4]=='B')
            {b=1024.0*1024.0*a;printf("%.6lf\n",b);}
        if(s[0]=='K'&&s[1]=='B'&&s[4]=='G'&&s[5]=='B')
            {b=a/1024.0/1024.0;printf("%.6lf\n",b);}
        if(s[0]=='K'&&s[1]=='B'&&s[4]=='M'&&s[5]=='B')
            {b=a/1024.0;printf("%.6lf\n",b);}
        if(s[0]=='K'&&s[1]=='B'&&s[4]=='B')
            {b=1024.0*a;printf("%.6lf\n",b);}
        if(s[0]=='B'&&s[3]=='G'&&s[4]=='B')
            {b=a/1024.0/1024.0/1024.0;printf("%.6lf\n",b);}
        if(s[0]=='B'&&s[3]=='M'&&s[4]=='B')
            {b=a/1024.0/1024.0;printf("%.6lf\n",b);}
        if(s[0]=='B'&&s[3]=='K'&&s[4]=='B')
            {b=a/1024.0;printf("%.6lf\n",b);}
    }
    return 0;
}
