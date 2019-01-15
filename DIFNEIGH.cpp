#include<iostream>
#include<map>
using namespace std;
int main()
{
	int t;				//variable to store number of test cases
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;		//usual meaning as given in the question 
		cin>>n>>m;
		int pre[4][4]={{1,1,3,3},{2,2,4,4},{3,3,1,1},{4,4,2,2}};		//pattern seen while solving problem
		int pre2[3][2]={{1,1},{2,2},{3,3}};
		int pre3[4]={1,1,2,2};
		int arr[n][m],ans=1,x=0;				//'arr' variable stores the final ans,'ans' contains the minimum value of k possible,'x' is used to differentiate between different cases
		if(n<=2 || m<=2)		//block contains all the exceptional cases when n or m <=2
		{
			if(n==1 && m==1)
				ans=1;
			else if(n==2 && m==2)
				ans=2;
			else if((n==2 && m>2) || (n>2 && m==2))
				ans=3;
			else if((n==1 && m>=2 )|| (n>=2 && m==1))
			{
				
				x++;
				if((n==1 && m==2) || (n==2 && m==1))
				ans=1;
				else
					ans=2;
				if(n==1)
			{
				for(int j=0;j<n;j++)
				{
					for(int k=0;k<m;k++)
					{
						arr[j][k]=pre3[k%4];		
					}
				}
			}
			else
			{
				for(int j=0;j<n;j++)
				{
					for(int k=0;k<m;k++)
					{
						arr[j][k]=pre3[j%4];
						
					}
				}
			}
			}
			if(!x)
			{
			if(m<=2)
			{
				for(int j=0;j<n;j++)
				{
					for(int k=0;k<m;k++)
					{
						arr[j][k]=pre2[j%3][k];
					}
				}
			}
			else
			{
				for(int j=0;j<n;j++)
				{
					for(int k=0;k<m;k++)
					{
						arr[j][k]=pre2[k%3][j];
					}
				}
			}
		}
		}
		else
			{
				ans=4;
				for(int j=0;j<n;j++)
				{
					for(int k=0;k<m;k++)
					{
						arr[j][k]=pre[j%4][k%4];
					}
				}
			}
			cout<<ans<<endl;
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				cout<<arr[j][k]<<" ";
			}
			cout<<endl;
		}
	}
	return(0);
}