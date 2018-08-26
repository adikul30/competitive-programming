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
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		vii m,t;
		m.clear();
		t.clear();
		ll motu = 0, tomu = 0;
		REP(i,0,n){
			cin >> a[i];
			if(i % 2 == 0){
				motu += a[i];
				m.pb(mp(a[i],i));
			}
			else {
				tomu += a[i];
				t.pb(mp(a[i],i));
			}
		}
		if(tomu > motu)cout << "YES" << endl;
		else if(motu >= tomu && k == 0)cout << "NO" << endl;
		else {
			sort(m.rbegin(), m.rend());
			sort(t.begin(), t.end());
			int j = 0;
			while(k != 0 && j < m.size() && j < t.size()){
				swap(a[m[j].second],a[t[j].second]);
				k--;
				j++;
			}
			motu = tomu = 0;
			REP(i,0,n){
				if((i % 2) == 0){
					motu += a[i];
				}
				else tomu += a[i];
			}
			if(tomu > motu)cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	
	return 0;
}