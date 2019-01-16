#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;			//to store the number of test cases
	for(int i=0;i<t;i++)
	{
		char arr[200];			//to store the input string
		scanf(" %[^\n]s",arr);
		string s=(string)arr;
		int f=0;						//flag to check condition
		for(int j=0;j<s.size()-2;j++)
		{	
			if(arr[j]=='n'&&(arr[j-1]==' ' || j-1<0))
			{
			if(arr[j+1]=='o' && arr[j+2]=='t' && (arr[j+3]==' ' || j+3>=s.size()))
				{
					cout<<"Real Fancy"<<endl;
				f++;
				break;
				}
			}
		}
		if(f==0)
			cout<<"regularly fancy"<<endl;
	}
	return(0);
}