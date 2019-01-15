#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t;			//variable to store number of test cases
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n,p;			//have usual meaning as in question
		cin>>n>>p;
		long long int sum=0;		//used to store final ans
			long long int ans=0,mod=0,pe=0,pe2=0;		//'ans' is used to store value dividing n by which we get maximum remainder,'mod' is used to store the remainder ,'pe' and 'pe2' are used to store different permutations in two cases
			if(n==1|| n==2)
			{
				sum=p*p*p;
			}
			else
			{
			ans=n/2+1;
			mod=n%ans;
			pe=p-mod;
			pe2=p-n;
			sum+=(pe2*pe);
			sum+=(pe2*pe2);
			sum+=(pe*pe);
			}
			cout<<sum<<endl;
	}
	return(0);
}