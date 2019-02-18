#include<iostream>
#define max 1000000000
using namespace std;

int main()
{
	long long int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		long long int ans1,ans2,avg=0,ans3,ans4,x1=0,y1=0,x2=0,y2=0;
		cout<<"Q"<<" "<<0<<" "<<0<<endl;
		cin>>ans1;
		cout<<"Q"<<" "<<max<<" "<<0<<endl;
		cin>>ans2;
		avg=ans1-ans2+max;
		//cout<<avg<<endl;
		avg=avg/2;
		cout<<"Q"<<" "<<avg<<" "<<0<<endl;
		cin>>ans3;
		y1=ans3;
		x1=ans1-y1;
		x2=max+y1-ans2;
		cout<<"Q"<<" "<<0<<" "<<max<<endl;
		cin>>ans4;
		y2=x1+max-ans4;
		cout<<"A"<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
		cin>>ans1;
		if(ans1!=1)
			exit(0);
	}
	return(0);
}