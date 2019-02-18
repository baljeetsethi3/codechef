#include<iostream>
using namespace std;
long long int gcd(long long int a,long long int b)
{
	if(a%b==0)
		return(b);
	else
		gcd(b,a%b);
}
int main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		long long int n,a,b,k;
		cin>>n>>a>>b>>k;
		long long int temp1= n/a;
		long long int temp2= n/b;
		long long int temp4=gcd(a,b);
		long long int temp5=a/temp4;
		long long int temp6=b/temp4;
		temp4=temp4*temp5*temp6;
		long long int temp3= n/temp4;
		long long int ans=temp1+temp2-(2*temp3);
		if(ans>=k)
			cout<<"Win"<<endl;
		else
			cout<<"Lose"<<endl;
	}
	return(0);
}