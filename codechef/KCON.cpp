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
typedef vector<ll> vi;
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
		int n,k;
		cin >> n >> k;
		vi v;
		int temp;
		for(int i = 0; i < n; i++){
			cin >> temp;
			v.pb(temp);
		}
		for(int i = 0; i < k-1; i++){
			for(int j = 0; j < n; j++)v.pb(v[j]);
		}
		ll sum = v[0],best = v[0];
		ll limit = v.size();
		for(int i = 1; i < limit; i++){
			sum = max(v[i],sum + v[i]);
			best = max(sum,best);
		}
		cout << best << endl;
	}
	
	return 0;
} 