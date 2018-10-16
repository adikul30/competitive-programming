#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int test,h,t;
    float ca;
    cin>>test;
    while(test--){
        cin>>h>>ca>>t;
        //cout<<h<<c<<t<<endl;
        bool a,b,c;
        a = (h>50);
        b = (ca<0.7);
        c = (t>5600);
        //cout<<a<<b<<c;
        if(a && b && c)
        cout<<10<<endl;
        else if(a && b)
        cout<<9<<endl;
        else if(b && c)
        cout<<8<<endl;
        else if(a && c)
        cout<<7<<endl;
        else if(a || b || c)
        cout<<6<<endl;
        else if(!a && !b && !c)
        cout<<5<<endl;
        }
	return 0;
}
 
