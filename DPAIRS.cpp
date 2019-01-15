#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;		//have meanings same as that in question
	cin>>n>>m;
	map<long long int ,int> m1,m2,s;	//'m1' and 'm2' are maps used to avoid repeation of number given as input,'s' is used to keep the records of sum
	vector<pair<long long int,int> > v1,v2,ans;		//'v1' and 'v2' are vectors used to store distinct numbers given as input ,'ans' is used to store the final answer
	long long int temp;					//temporary variable used to store data temporaraily
	int flag;					//flag to check some condition and compute the result accordingly

	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(m1[temp]==0)
		{
			v1.push_back(make_pair(temp,i));
			m1[temp]++;
		}
	}
	for(int i=0;i<m;i++)
	{
		cin>>temp;
		if(m2[temp]==0)
		{
			v2.push_back(make_pair(temp,i));
			m2[temp]++;
		}
	}
	sort(v1.begin(),v1.end());				//sorts the vector v1 in increasing order
	sort(v2.begin(),v2.end());
		for(int i=0;i<v1.size();i++)
		{
			long long int sum=v1[i].first+v2[0].first;
			s[sum]++;
			ans.push_back(make_pair(v1[i].second,v2[0].second));
		}
	for(int i=1;i<v2.size();i++)
	{
		long long int sum=v1[0].first+v2[i].first;
			
			if(s[sum]==0)
			{
				s[sum]++;
				ans.push_back(make_pair(v1[0].second,v2[i].second));
			}
	}
	
	if(ans.size()<(n+m-1))
	{
		for(int j=v2.size()-1;j>0;j--)
		{
			if(ans.size()>=n+m-1)
				break;
			long long int sum=v1[v1.size()-1].first+v2[j].first;
			if(s[sum]==0)
			{
				ans.push_back(make_pair(v1[v1.size()-1].second,v2[j].second));
				s[sum]++;
			}
			
		}
	}
	
	
	for(int i=0;i<ans.size();i++)
	cout<<ans[i].first<<" "<<ans[i].second<<endl;
return(0);
}