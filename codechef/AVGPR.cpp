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
		ll n;
		cin >> n;
		ll a[n],b[n];
		ll avg;
		ll count = 0;
		REP(i,0,n){
			cin >> a[i];
			b[i] = 2 * a[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		REP(i,0,n-1){
			REP(j,i+1,n){
				avg = (a[i] + a[j]);
				if(avg % 2 == 0){
					ll * p;
	  				p = std::find (b, b + n, avg);
	  				if (p != b + n){
	  					// what_is(a[i]);
	  					// what_is(a[j]);
	  					count++;
	  				}
	  			}
			}
		}
		cout << count << endl;
	}
	
	return 0;
}