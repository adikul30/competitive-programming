#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for(int i = a; i < b; ++i)

int main()
{	
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int a[n],count = 0;
		REP(i,0,n){
			cin >> a[i];
			a[i] += k;
		}
		REP(i,0,n){
			if(a[i]%7 == 0)count++;
		}
		cout << count << endl;
	}
	return 0;
}