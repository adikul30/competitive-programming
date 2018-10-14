#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,c,i,sum=0,temp;
		cin>>n>>c;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			sum=sum+temp;
		}
		if(sum<=c)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}

