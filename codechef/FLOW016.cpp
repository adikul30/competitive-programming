#include <bits/stdc++.h>
using namespace std;
 
long int gcd(long int a,long int b){
    if(a%b==0)
        return b;
    else
        gcd(b%a,a);
}
 
int main() {
    long int t,n1,n2,hcf;
    cin>>t;
    while (t--){
        cin>>n1>>n2;
        hcf=gcd(n1,n2);
        cout<<hcf<<" "<<(n1*n2)/hcf<<endl;
    }
	return 0;
}
