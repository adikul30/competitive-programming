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
#define divideby 1000000007
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
		ll m,n;
		cin >> m >> n;
		ll a[m],b[m];
		REP(i,1,m+1)cin >> a[i];
		REP(i,1,m+1)cin >> b[i];
		ll temp = 2;
		ll result = 0;
		REP(i,1,m+1){
			REP(j,1,m+1){
				ll size = max(temp,n);
				ll fib[size];
				fib[1] = a[i];
				fib[2] = b[j];
				REP(k,3,n+1){
					fib[k-1] %= divideby;
					fib[k-2] %= divideby;
					fib[k] = fib[k-1] + fib[k-2];
					fib[k] %= divideby;
					REP(m,1,k+1)cout << fib[m] << " ";
					cout << endl;
				}
				result = result % divideby;
				fib[n] = fib[n] % divideby;
				result += fib[n];
				result = result % divideby;
				cout << endl;
			}
		}
		cout << result << endl;
	}
	
	return 0;
}