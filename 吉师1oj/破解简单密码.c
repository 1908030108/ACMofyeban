#include <stdio.h>
#include <string.h>

int main(void){
    char cha[110];
    int i;
    while(gets(cha)){
        int n = strlen(cha);
        for(i = 0; i < n; i++){
            if(cha[i]>= 'A' && cha[i] <= 'Y')
                cha[i] = cha[i] + 33;
            else if(cha[i] == 'Z')
                cha[i] = 'a';
//            abc--2, def--3, ghi--4, jkl--5, mno--6, pqrs--7, tuv--8 wxyz--9
            else if(cha[i] >= 'a' && cha[i] <= 'c')
                cha[i] = '2';
            else if(cha[i] >= 'd' && cha[i] <= 'f')
                cha[i] = '3';
            else if(cha[i] >= 'g' && cha[i] <= 'i')
                cha[i] = '4';
            else if(cha[i] >= 'j' && cha[i] <= 'l')
                cha[i] = '5';
            else if(cha[i] >= 'm' && cha[i] <= 'o')
                cha[i] = '6';
            else if(cha[i] >= 'p' && cha[i] <= 's')
                cha[i] = '7';
            else if(cha[i] >= 't' && cha[i] <= 'v')
                cha[i] = '8';
            else if(cha[i] >= 'w' && cha[i] <= 'z')
                cha[i] = '9';
        }
        for(i = 0; i < n; i++)
            printf("%c",cha[i]);
        printf("\n");
    }
return 0;
}
