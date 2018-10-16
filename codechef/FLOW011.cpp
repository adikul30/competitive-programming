#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,p;
    double hra,da;
    cin>>n;
    while (n--){
        cin>>p;
        if(p<1500){
            hra=0.1*p;
            da=0.9*p;
        }
        else{
            hra=500;
            da=0.98*p;
        }
        cout<<p+hra+da<<endl;
    }
	return 0;
}
