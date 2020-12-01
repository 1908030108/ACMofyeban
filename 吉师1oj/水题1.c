#include <stdio.h>

struct student{
    char sno[20];
    char sname[20];
    int grade[4];
}s[10];

int main(void){
    int n;
    scanf("%d",&n);
   for(int i = 0; i< n;i++){
        scanf("%s",&s[i].sno);
        scanf("%s",&s[i].sname);
        for(int j= 0; j < 3; j++)
            scanf("%d",&s[i].grade[j]);
        printf("%s,",s[i].sno);
        printf("%s",s[i].sname);
        for(int j = 0;j < 3; j++)
            printf(",%d",s[i].grade[j]);
   printf("\n");
        }

    return 0;
}
