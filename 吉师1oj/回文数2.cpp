#include <iostream>
#include <cstdlib>
#include <cstdio>
int rev(int x,int base){//反转数字x，基数为base
    int y=0;
    while (x){
        y=y*base+x%base;//跟10进制数的反转原理是一样的
        x/=base;
    }
    return y;
}
char anybase[32];//由于用不了setbase，用字符串临时存这个任意进制的数
main(){
    int base,m,i=0,s=30;
    scanf("%d",&base);
    scanf("%s",anybase);
    //std::cin>>base>>anybase;        //输入基数N和N进制数M
    m=strtol(anybase,0,base);        //字符串转整型
    do{
        int t=rev(m,base);            //反转M
        if(t==m){                    //如果相等即回文
            std::cout<<"STEP="<<i;    //输出结果
            return 0;                //结束
        }
        m+=t,++i;                    //Excited
    }while (i<s);                    //限制步数
    std::cout<<"Impossible!";        //Whatever
    return 0;
}
