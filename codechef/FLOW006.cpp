#include <iostream>
using namespace std;
 
int main() {
	int n,t,sum=0,rem;
	cin>>t;
	while(t!=0){
	    cin>>n;
	    sum=0;
	    while(n>0){
	        rem=0;
	        rem=n%10;
	        sum=sum+rem;
	        n=n/10;
	    }
	    cout<<sum<<endl;
	    t--;
	    }
	return 0;
}
