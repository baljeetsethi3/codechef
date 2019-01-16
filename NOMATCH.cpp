#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;		//used to store number of test cases
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;			//meaning same as in the question
		cin>>n;
		vector<long long int> v;		//used to store input array of numbers
		long long int temp,sum=0;		//"temp" is just a temporary variable , "sum" is used to store final sum
		for(int j=0;j<n;j++)
		{
			cin>>temp;
			v.push_back(temp);
		}
		sort(v.begin(),v.end(),greater<int>());
		for(int j=0;j<n;j++)
		{
			if(j<n/2)
				sum+=v[j];
			else
				sum-=v[j];
		}
		cout<<sum<<endl;
	}
	return(0);
}