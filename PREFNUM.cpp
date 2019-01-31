#include <bits/stdc++.h>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		unsigned long long int x,y;
		cin>>x>>y;
		unsigned long long int z=x,num=x,cnt=1;
		while(num<=1e18)
		{
			num=x*cnt;
			if(num%y==0)break;
			unsigned long long int val=y-num%y;
			if(val<cnt)
			{
			num+=val;
			break;
			}
			cnt*=10;
		}
		if(num<=1e18)
			cout<<num;
		else cout<<"-1";
		cout<<"\n";
	    }
	}
