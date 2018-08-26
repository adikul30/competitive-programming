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
// #define MAX 10000000000
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;
 
int getXOR(int x, int y)
{
   return (x | y) & (~x | ~y);
}
 
int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll a[n];
		vl b;
		REP(i,0,n)cin >> a[i];
		ll k = 0;
		if(n == 1){
			cout << a[0] + a[0] << endl;
		}
		else{
			REP(i,0,n){
				REP(j,0,n){
					b.pb(a[i] + a[j]);
				}
			}
			ll ans = b[0] ^ b[1];
			REP(i,2,b.size()){
				if(ans == b[i]){
					ans = 0;
				}
				// else ans = ans ^ b[i];
				else {
					ans = getXOR(ans,b[i]);
				}
			}
			cout << ans << endl;
		}
	}
	
	return 0;
} 