#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		vector<int> v;
		int n,j;
		cin>>n;
		int a[n],d[n];
		for(j=0;j<n;j++)
			cin>>a[j];
		for(j=0;j<n;j++)
			cin>>d[j];
		if(n==1)
			cout<<d[0]<<endl;
		else if(n==2)
		{
			if(d[0]>a[1])
			v.push_back(d[0]);
			if(d[1]>a[0])
				v.push_back(d[1]);
			if(v.size()==0)
				cout<<"-1"<<endl;
			else
			{
			sort(v.begin(),v.end(),greater<int>());
			cout<<v[0]<<endl;
			}
		}
		else
		{
			if(d[0]>(a[1]+a[n-1]))
				v.push_back(d[0]);
			for(j=1;j<n;j++)
			{
				if(d[j]>(a[j-1]+a[(j+1)%n]))
					v.push_back(d[j]);
			}
			if(v.size()==0)
			cout<<"-1"<<endl;
		else
		{
			sort(v.begin(),v.end(),greater<int>());
			cout<<v[0]<<endl;
		}
		}
	}
	return(0);
}
		