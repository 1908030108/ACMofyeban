#include<stdio.h>

main(){
     char a[1000];
     int b=0;
     int i;
     for(i=0;;i++){
            scanf("%c",&a[i]);
         if(a[i]==' '){break;}
         if(a[i]=='$')
            {b=b+1;}
        }
         printf("%d",b);
}
