#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for(int i = a; i < b; ++i)

typedef vector<int> VI;

int main()
{	
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		multiset<int> s;
		int temp;
		REP(i,0,n){
			cin >> temp;
			s.insert(temp);
		}
		// multiset<int>::iterator it = s.begin();
		// for (it = s.begin(); it != s.end(); it++) {
		// 	cout << *it << "\n";
		// }
		multiset<int>::iterator it,m ;
		it = s.end();
		//printf("iterator : %d\n",*--it);
		*--it;
		int size = *it + 1 - n;
		//printf("Size : %d\n", size);
		int a[size],j=0;
		REP(i,0,*it){
			m = s.find(i);
			if(*m == n){
				a[j++] = i;
				// s.insert(i);
				//k--;
			}
		}
		REP(i,0,j)cout << a[i] << endl;
		cout << "*" << endl;
		s.clear();
	}
	return 0;
}