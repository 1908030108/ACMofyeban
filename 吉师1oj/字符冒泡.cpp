#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2,str3,t;
	//getline 此函数可读取整行，包括前导和嵌入的空格，并将其存储在字符串对象中
    //	运算符">","<",">=","<=","!="均被重载用于字符串的比较
	getline(cin,str1);
	getline(cin,str2);
	getline(cin,str3);

//	a b c  大小排序问题(从小到大排)
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
