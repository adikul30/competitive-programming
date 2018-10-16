#include <iostream>

#include <iomanip>

using namespace std;

int main() {

	long long int t,q,p;

	long double price;

	cin>>t;

	while(t!=0){

	 price=0;

	 cin>>q>>p;

	 price=q*p;

	 if(q>1000){

	 price=price-(0.1*price);

	}

	cout<<fixed<<setprecision(6)<<price<<endl;

	t--;

	}

	return 0;

}

