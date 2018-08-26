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
	while(t--) {
		string input,s;
		ll n;
		cin >> s >> n;
		ll len = s.length();
		ll acount = 0,bcount = 0;
		ll a = count(s.begin(), s.end(), 'a');
		acount = a;
		ll b = count(s.begin(), s.end(), 'b');
		bcount = b;
		ll ans = 0;
		REPR(i,len - 1,0){
			if(a > b)ans++;
			if(s[i] == 'a')a--;
			else b--;
		}
		if (ans == 0) {
			cout << "0" << endl;
		}
		else if (n == 1) {
			cout << ans << endl;
		}
		else if (bcount > acount){
			cout << ans << endl;
		}
		else{
			what_is(ans);
			ll k = 2;
			ll iterations = 1;
			ll temp = acount - ans;
			what_is(temp);
			if(ans < acount){
				while(temp-- && iterations < n){
					what_is(ans);
					what_is(k);
					ans += k;
					k += 2;
					iterations++;
					what_is(ans);
				}
			}
			REP(i,iterations,n){
				ans += len;
				// what_is(ans);
			}
			cout << ans << endl;	
		}

	}
	
	return 0;
}