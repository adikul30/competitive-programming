/*
 *	adikul30
 *	Aditya Kulkarni <aditya.kulkarni15@siesgst.ac.in>
 */
#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define REPR(i, a, b) for(int i = a; i >= b; --i)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define what_is(x) cerr << #x << " is " << x << endl;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;

int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	REP(i,1,t+1) {
		ll n;
		cin >> n;
		ll a[n];
		REP (i,0,n) cin >> a[i];
		bool done = false;
		while (!done){
			done = true;
			for(int j = 0; j < n-2; j++) {
				if (a[j] > a[j+2]) {
					done = false;
					int temp = a[j];
					a[j] = a[j+2];
					a[j+2] = temp;
				}
			}
		}
		int pos = INF;
		bool sorted = true;
		REP(j,0,n-1) {
			if (a[j] <= a[j+1]) continue;
			else {
				sorted = false;
				pos = j;
			}
		}
		if(sorted)cout << "Case #" << i << ": " << "OK" << endl;
		else cout << "Case #" << i << ": " << pos << endl;
	}
	
	return 0;
}