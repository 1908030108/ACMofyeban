#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2,str3,t;
	//getline �˺����ɶ�ȡ���У�����ǰ����Ƕ��Ŀո񣬲�����洢���ַ���������
    //	�����">","<",">=","<=","!="�������������ַ����ıȽ�
	getline(cin,str1);
	getline(cin,str2);
	getline(cin,str3);

//	a b c  ��С��������(��С������)
//	if(a > b){
//        t = a; a = b; b = t;
//	}
//	if(b > c){
//        t = b; b = c; c = t;
//	}
//	if(a > b){
//        t = a; a = b; b = t;
//	}

    if(str1>str2)
    {
        t=str2;str2 = str1;str1=t;
    }
    if(str2>str3)
    {
        t=str3;str3=str2;str2=t;
    }
    if(str1>str2)
    {
        t=str2;str2=str1;str1=t;
    }
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
	return 0;
 }
