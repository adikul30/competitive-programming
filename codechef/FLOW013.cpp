#include <bits/stdc++.h>

using namespace std;

int main() {

	int t,n,m,p;

	cin>>t;

	for(int i=0; i<t; i++){

	 cin>>n>>m>>p;

	 if(n==0 || m==0 || p==0)

	 cout<<"NO"<<endl;

	 else if(n+m+p!=180)

	 cout<<"NO"<<endl;

	 else 

	 cout<<"YES"<<endl;

	}

	return 0;

} 

