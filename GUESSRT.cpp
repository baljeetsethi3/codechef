#include<iostream>
#define mod 1000000007
using namespace std;
long long int gcd(long long int x,long long int y)
{
	if(x%y==0)
		return(y);
	else
		return(gcd(y,x%y));
}
long long int exmod(long long int a,long long int b,long long int c) 
{ 
long long int x; 
    if (a == 0) 
        return 0; 
    if (b == 0) 
        return 1; 
    if (b % 2 == 0) { 
        x = exmod(a, b / 2, c); 
        x = (x * x) % c; 
    } 
    else { 
        x = a % c; 
        x = (x * exmod(a, b - 1, c) % c) % c; 
    } 
    return (long long int)((x + c) % c); 
}
long long int gcdex(long long int a,long long int b,long long int *x,long long int *y) 
{ 
long long int x1, y1; 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
    long long int gcd = gcdex(b%a, a, &x1, &y1); 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
    return gcd; 
}  
long long int modin(long long int a,long long int m) 
{ 
    long long int x, y; 
    long long int g = gcdex(a, m, &x, &y);  
    return((x%m + m) % m); 
} 

int main()
{
	long long int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		long long int n,k,m;
		cin>>n>>k>>m;
		if(m%2==0)
		{
			long long int terms=m/2;
			long long int temp1=exmod(n,terms,mod);
			long long int temp2=exmod(n-1,terms,mod);
			long long int temp3=temp2;
			long long int temp4=temp1;
			temp2=temp1-temp2;
			if(temp2<0)
			temp2=temp2+mod;
			temp2=temp2%mod;
			temp3=temp3%mod;
			temp4=temp4%mod;
			long long int t=(n+k)%mod;
			temp4=(temp4*t)%mod;
			long long int x=(temp2*temp4)%mod;
			long long int y=(temp1*temp3)%mod;
			x=(x+y)%mod;
			y=(temp1*temp4)%mod;
			long long int com=gcd(x,y);
			x=x/com;
			y=y/com;
			y=modin(y,mod);
			long long int ans=(x*y)%mod;
			cout<<ans<<endl;
		}
		else
		{
			long long int terms=(m+1)/2;
			long long int temp1=exmod(n,terms,mod);
			long long int temp2=exmod(n-1,terms,mod);
			temp2=temp1-temp2;
			if(temp2<0)
			temp2=temp2+mod;
			temp2=temp2%mod;
			long long int com=gcd(temp1,temp2);
			temp1=temp1/com;
			temp2=temp2/com;
			temp1=modin(temp1,mod);
			long long int ans=(temp1*temp2)%mod;
			cout<<ans<<endl;
		}
	}
	return(0);
}