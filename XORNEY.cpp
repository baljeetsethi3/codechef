#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	
	unsigned long long int l,r;
	cin>>l>>r;
	long long int x=r-l;
	int y=x%4;
	if((l%2)!=0)
	{
		if(y==0 || y==1)
			cout<<"Odd"<<endl;
		else
			cout<<"Even"<<endl;
	}
	else
	{
		if(y==2||y==1)
			cout<<"Odd"<<endl;
		else
			cout<<"Even"<<endl;
	}
	}
	return(0);
}