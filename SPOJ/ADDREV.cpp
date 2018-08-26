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

ll rev(ll a){
	ll ans = 0;
	while(a){
		ans *= 10;
		ans += a%10;
		a /= 10;
	}
	return ans;
}
 
int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	// Start Solution here
	int n;
	cin >> n;
	ll a,b;
	while(n--){
		cin >> a >> b;
		printf("%lld\n", rev(rev(a)+rev(b)));
	}
	// End Solution here
	// cerr << "Solved in " << clock() << " ms" << endl;
	return 0;
}