#include<iostream>
using namespace std;
long long int gcd(long long int x,long long int y)		//function to find gcd(greatest common divisor) of two numbers using recursion
{
	if(x%y==0)
		return(y);
	else
		gcd(y,x%y);
}
int main()
{
	long long int t;		//variable t stores number of test cases		
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n,t,x,y,z,a,b;		//variables n,t,x,y,z are used just like used in the question ans a,b are used to store the final answer which the question dentoes as m,n respectively
		cin>>n>>t>>x>>y>>z;
		if(x==0 || z==0)
		{
			if(t==3)					//exceptional case when the x,y,z or z,y,x are 0,1,2 respectively
			{
				a=1;
				b=1;
			}
			else
			{
			a=2*n-1;					//applying maths for the problem
			b=2*n+1;				
			long long int temp=gcd(a,b);		//to make answer co prime
			a=a/temp;
			b=b/temp;
			}
		}
		else if(t==2 || t==4)
		{
			a=(2*n)+1-(2*y);		//applying maths for the problem
			b=2*n+1;
			long long int temp=gcd(a,b);			//to make answer co prime
			a=a/temp;
			b=b/temp;
		}	
		else
		{
		
			if(x==z && (x-y)==1 )
			{
				a=x;				//applying maths for the problem
				b=2*n+1;
				long long int temp=gcd(a,b);			//to make answer co prime
				a=a/temp;
				b=b/temp;
			}
			else if(x==z && (y-x)==1)
			{
				a=y-1;				//applying maths for the problem
				b=2*n+1;
				long long int temp=gcd(a,b);			//to make answer co prime
				a=a/temp;
				b=b/temp;
			}
			else if(((y-x)==1&&t==1) || (t==3 && (x-y)==1))
			{
				a=2*n-y;			//applying maths for the problem
				b=2*n+1;
				long long int temp=gcd(a,b);			//to make answer co prime
				a=a/temp;
				b=b/temp;
			}
			else 
			{
				a=2*n-y+2;				//applying maths for the problem
				b=2*n+1;
				long long int temp=gcd(a,b);			//to make answer co prime
				a=a/temp;
				b=b/temp;
			}
		}
		cout<<a<<" "<<b<<endl;
	}
	return(0);
}