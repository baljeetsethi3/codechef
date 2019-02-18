#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	unsigned long long int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		vector<unsigned long long int> v;
		unsigned long long int n,j,temp,sum=0;
		cin>>n;
		for(j=0;j<n;j++)
		{
			cin>>temp;
			sum+=temp-1;
		}
		++sum;
		cout<<sum<<endl;
	}
	return(0);
}