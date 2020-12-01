#include <stdio.h>
#include <string.h>

//整数幂运算函数
int int_pow(int x, int y){
    int i, result = 1;
    for(i = 1; i <= y; i++){
        result *= x;
    }
    return result;
}

//将十进制转换为任意进制，dnum为十进制， jz 为目标进制
void dtox(int dnum, int jz){
    char xnum[100];
    int i = 0, j = 0;
    while(dnum >= jz){
        if(dnum % jz <= 9)
            xnum[j++] = dnum%jz + 48;
        else
            xnum[j++] = dnum%jz - 10 + 'A';
        dnum = dnum / jz;
    }
    if(dnum <= 9)
        xnum[j] = dnum + '0';
    else
        xnum[j] = dnum -  10 + 'A';
    for(i = j; i >= 0; i--)
        printf("%c",xnum[i]);
}

//将输入的数转换为十进制， num 是一个数组， jz为源数据的进制
int xtod(char num[], int jz){
    int  dnum = 0, i, n = 0, b;
    for(i = 0; ; i++){
        if(num[i] == '\0')break;
        else n++;
    }
    for(i = n-1; i>=0; i--)
    {
        if(num[n-i-1] >= 'a')
            b = num[n-i-1]-'a'+10;
        else if(num[n-i-1] >= 'A')
            b = num[n-i-1]-'A'+10;
        else
            b = num[n-i-1]-'0';
        dnum = dnum + b*int_pow(jz,i);
    }
    return dnum;
}

int main(void){
    char num[100];
    int jz1, jz2;
    printf("输入要转换的数:\n");
    scanf("%s",num);
    printf("输入数的进制：\n");
    scanf("%d",&jz1);
    printf("要转换的进制:\n");
    scanf("%d",&jz2);
    dtox(xtod(num,jz1),jz2);
return 0;
}
