#include <iostream>
#include <cstdlib>
#include <cstdio>
int rev(int x,int base){//��ת����x������Ϊbase
    int y=0;
    while (x){
        y=y*base+x%base;//��10�������ķ�תԭ����һ����
        x/=base;
    }
    return y;
}
char anybase[32];//�����ò���setbase�����ַ�����ʱ�����������Ƶ���
main(){
    int base,m,i=0,s=30;
    scanf("%d",&base);
    scanf("%s",anybase);
    //std::cin>>base>>anybase;        //�������N��N������M
    m=strtol(anybase,0,base);        //�ַ���ת����
    do{
        int t=rev(m,base);            //��תM
        if(t==m){                    //�����ȼ�����
            std::cout<<"STEP="<<i;    //������
            return 0;                //����
        }
        m+=t,++i;                    //Excited
    }while (i<s);                    //���Ʋ���
    std::cout<<"Impossible!";        //Whatever
    return 0;
}
