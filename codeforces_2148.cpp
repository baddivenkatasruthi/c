#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,n;
		cin>>x>>n;
		int s=0;
		for(int i=1;i<=n;i++)
		{
			if(i%2==0) x=x*-1;
			s=s+x;
		}
		return s;
	}
}
