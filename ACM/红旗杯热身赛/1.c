#include <stdio.h>
int main()
{
    int b[4][7]={
                {1,0,1,0,1,1,1},
                {1,0,0,1,1,0,0},
                {0,0,0,1,0,1,0},
                {1,1,0,0,1,0,0}
                 };
    int T,n;
    char a[100],d[100],e[100],f1[4],f[4];
    while(scanf("%d",&T)!=EOF)
    {
        scanf("%d",&n);
        while(n--)
        {
            scanf("%s",a);
                if(a=="Is he young?")
                        scanf("%s",f);
                        scanf("%s",e);
                        scanf("%s",f1);
                    if(f=="Yes.")
                        {
                        scanf("%s",d);
                        if(d=="Does he have golden hair?")
                            printf("Nao Tomori\n");
                        else
                            printf("Alan Turing\n");
                        }
                    else if(f=="No.")
                        {
                        scanf("%s",d);
                        if(d=="Does he have golden hair?")
                            printf("Donald Trump\n");
                        else
                            printf("Dongpo Su\n");
                        }

        }
    }
    return 0;
}
