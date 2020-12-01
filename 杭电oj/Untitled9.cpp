#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>

#define sscc ios::sync_with_stdio(false); //��ʡcin ������ʱ��

using namespace std;

int nexts[10005];

void getnexts(string s)
{
	nexts[0]=-1;
	for(int i=0,j=-1;i<s.size();)
	{
		if(j==-1||s[i]==s[j])
		{
			i++,j++;
			nexts[i]=j;//��¼��һ����ĸ�±꣬ʧ�ܺ����ֱ��������һ��ĸƥ�� ��
		}
		else
			j=nexts[j];//����ǰ���ʧ�ܽڵ�
	}
}

int KMP(string s1,string s2)
{
	int ans=0;//ͳ����Ŀ
	for(int i=0,j=0;i<s1.size();)
	{
		if(j==-1||s1[i]==s2[j])//jΪ-1 Ϊ��ǰû��һ���ַ����䡣
			i++,j++;
		else//����ʧ�ܣ�����ʧ�ܽڵ�
			j=nexts[j];
		if(j==s2.size())//ͳ���Ӵ���Ŀ
			ans++,j=0;
	}
	return ans;
}

int main()
{
	sscc;
	string s,c;
	while(cin>>s&&s[0]!='#')
	{
		cin>>c;
		getnexts(c);
		cout<<KMP(s,c)<<endl;
	}
	return 0;
}
