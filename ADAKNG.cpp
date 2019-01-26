#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int r,c,k;
		cin>>r>>c>>k;
	int x1=	max(1,c-k);
	int x2=min(8,c+k);
	int y1=max(1,r-k);
	int y2=min(8,r+k);
	int ans=(x2-x1+1)*(y2-y1+1);
	cout<<ans<<endl;
	}
	return(0);
	}
