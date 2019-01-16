#include<iostream>
using namespace std;
int exist(int x,int y,int n)		//used to check if a particular index(position) of 2-d array exist
{
	if(x>=0 && x<n && y>=0 && y<n)
		return(1);
	else
		return(0);
}
int main()
{
	int t,i;			//'t' used to store number of test cases,'i' is used just for counter in for loop
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n,k,j,l,x=1;		//'n' and 'k' meaning same as question,'j' ans 'l' used as counter ,'x' contains a value to be stored in the final ans array
		cin>>n;
		int arr[n][n];			//2-D array to store final answer
		for(j=0;j<n;j++)
		{
			for(k=0,l=j;k<n&&l>=0;k++,l--)
			{
				if(exist(k,l,n))
				{	
				arr[k][l]=x;
				x++;
				}
			}
		}
		for(j=1;j<n;j++)
		{
			for(k=j,l=n-1;k<n&&l>=0;k++,l--)
			{
				if(exist(k,l,n))
				{	
				arr[k][l]=x;
				x++;
				}
			}
		}
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				cout<<arr[j][k]<<" ";
			}
			cout<<endl;
		}
	}
	return(0);
}