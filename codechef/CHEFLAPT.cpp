#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for(int i = a; i < b; ++i)

int main()
{	
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		REP(i,0,n)scanf("%d",&a[i]);
		sort(a,a+n);
		REP(i,0,n){
			int c = count(a,a+n,a[i]);
			if(c == 1){
				printf("%d\n", a[i]);
				break;
			}
		}
	}
	return 0;
}