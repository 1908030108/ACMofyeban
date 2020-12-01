#include <stdio.h>

int main(void){
    int grade;
    while(~scanf("%d",&grade)){
        grade = grade / 10;
        if(grade > 10){
            printf("Score is error!");
            printf("\n");
            continue;
        }
        switch(grade){
          case 10: printf("A"); break;
          case 9: printf("A"); break;
          case 8: printf("B"); break;
          case 7: printf("C"); break;
          case 6: printf("D"); break;
          default: printf("E"); break;
        }
        printf("\n");
    }
return 0;
}
