#include <bits/stdc++.h>

using namespace std;

int main() {

	int t,n,sum;

	cin>>t;

	for(int i=0;i<t;i++){

	 sum=0;

	 cin>>n;

	 while(n>0){

	 if(n>=100){

	 sum=sum+(n/100);

	 n=n%100;

	 }

	 else if(n>=50){

	 sum=sum+(n/50);

	 n=n%50;

	 }

	 else if(n>=10){

	 sum=sum+(n/10);

	 n=n%10;

	 }

	 else if(n>=5){

	 sum=sum+(n/5);

	 n=n%5;

	 }

	 else if(n>=2){

	 sum=sum+(n/2);

	 n=n%2;

	 }

	 else if(n>=1){

	 sum=sum+(n/1);

	 n=n%1;

	 }

	 }

	 cout<<sum<<endl;

	}

	return 0;

}

