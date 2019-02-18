#include<iostream>
#include<string>
#include<cstdio>
#include<map>
///#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,count=0;
		cin>>n;
		map<char,int> m;
		for(int j=0;j<n;j++)
		{
			char arr[500];
			scanf(" %[^\n]s",arr);
			string s=(string)arr;
			for(int k=0;k<s.size();k++)
			{
				if(m[arr[k]]==j)
				{
				m[arr[k]]++;
				}
			}
		}
		for(int j=0;j<26;j++)
		{
			if(m[(char)(j+97)]==n)
					count++;
		}
		cout<<count<<endl;
	}
	return(0);
}
	