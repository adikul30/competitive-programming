/*
 *	adikul30
 *	Aditya Kulkarni <aditya.kulkarni15@siesgst.ac.in>
 */
#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
#define EPS 1e-9
#define REP(i, a, b) for(ll i = a; i < b; ++i)
#define REPR(i, a, b) for(int i = a; i >= b; --i)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define what_is(x) cerr << #x << " is " << x << endl;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vi;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;

int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	vi v;
	int temp;
	REP(i,0,n){
		cin >> temp;
		v.pb(temp);
	}
	ll q;
	cin >> q;
	vector<pair<ll,ll> > vp;
	ll x,y;
	REP(i,0,q){
		cin >> x >>y;
		vp.pb(mp(x,y));
	}
    // REP(i,0,q){
    //     // "first" and "second" are used to access
    //     // 1st and 2nd element of pair respectively
    //     cout << vp[i].first << " "
    //          << vp[i].second << endl;
    // }
    ll count = n;
    REP(i,0,q){
    	REP(j,0,n){
	    	ll ans = (j & vp[i].first);
	    	// what_is(ans);
	    	if(ans == j){
	    		if(v[j] != (-INF))v[j] -= vp[i].second;
	    	}
	    	if(v[j] <= 0 && v[j] != (-INF)){
	    		count--;
	    		v[j] = -INF;
	    	}
	    }
    	cout << count << endl;
    }
    cerr << "Solved in " << clock() << " ms" << endl;
	return 0;
}