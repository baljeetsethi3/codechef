#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
	int t;
	cin>>t;				//to store number of test cases
	for(int i=0;i<t;i++)
	{
		int n,a,b;				//meanings same as that in the question
		cin>>n>>a>>b;
		int bob=0,alice=0,both=0;		//"bob" used to store number of turns bob has,"alice" used to store number of turns alice has,"both" is used to store the common numbers i.e divisible by both the numbers a and b 
		long long int temp;				//temporary variable used to store data temporarily
		for(int j=0;j<n;j++)
		{
			cin>>temp;
			if(temp%a==0 && temp%b==0)
			{
				both++;
			}
			else if(temp%a==0)
			{
				bob++;
			}
			else if(temp%b==0)
			{
			alice++;
			}
		}
		if(both!=0)
			bob++;
		if(bob<=alice)
			cout<<"ALICE"<<endl;
		else
			cout<<"BOB"<<endl;
	}
	return(0);
}
		