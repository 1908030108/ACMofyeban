#include <stdio.h>
#include <string.h>

//���������㺯��
int int_pow(int x, int y){
    int i, result = 1;
    for(i = 1; i <= y; i++){
        result *= x;
    }
    return result;
}

//��ʮ����ת��Ϊ������ƣ�dnumΪʮ���ƣ� jz ΪĿ�����
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

//���������ת��Ϊʮ���ƣ� num ��һ�����飬 jzΪԴ���ݵĽ���
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
    printf("����Ҫת������:\n");
    scanf("%s",num);
    printf("�������Ľ��ƣ�\n");
    scanf("%d",&jz1);
    printf("Ҫת���Ľ���:\n");
    scanf("%d",&jz2);
    dtox(xtod(num,jz1),jz2);
return 0;
}
