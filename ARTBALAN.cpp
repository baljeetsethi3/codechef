#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		map<char,long long int> m;
		vector<long long int> v;
		string s;
		cin>>s;
		long long int j,k,l;
		for(j=0;j<st.size();j++)
		m[s[j]]++;
		for(j=0;j<26;j++)
		{
			if(m[(char)(j+65)]!=0)
				v.push_back(m[(char)(j+65)]);
		}
		long long int len=st.size();
		long long int min=-1;
		for(j=1;j<=26 && j<=len;j++)
		{
			if(len%j!=0)
				continue;
			else
			{
				vector<pair<long long int,long long int> > v1;
				long long int sum=0;
				long long int x=len/j;
			for(k=0;k<v.size();k++)
			{
					long long int y=x-v[k];
					if(y<=0)
					v1.push_back(make_pair(-y,0));
					else
					v1.push_back(make_pair(y,1));
			}
			sort(v1.begin(),v1.end());
			long long int v1len=v1.size();
			if(v1len<j)
			{
				long long int y=j-v1len;
				for(l=0;l<v1len;l++)
				{
					if(v1[l].second==1)
					sum+=v1[l].first;
				}
				sum=sum+y*x;
			}
			else
			{
				for(l=0;l<j;l++)
				{
					if(v1[l].second==1)
					sum+=v1[l].first;
				}
			}
				if(sum<min || min==-1)
					min=sum;
				//cout<<min<<endl;
			}
		}
		cout<<min<<endl;
	}
return(0);
}	
	