#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>

#define sscc ios::sync_with_stdio(false); //节省cin 的输入时间

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
			nexts[i]=j;//记录的一个字母下标，失败后可以直接跳到下一字母匹配 。
		}
		else
			j=nexts[j];//跳到前面的失败节点
	}
}

int KMP(string s1,string s2)
{
	int ans=0;//统计数目
	for(int i=0,j=0;i<s1.size();)
	{
		if(j==-1||s1[i]==s2[j])//j为-1 为当前没有一个字符适配。
			i++,j++;
		else//适配失败，调回失败节点
			j=nexts[j];
		if(j==s2.size())//统计子串数目
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
