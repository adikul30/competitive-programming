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
	ll n,x,y;
	cin >> n >> x >> y;
	int a[n],b[n];
	ll sum = 0;
	REP(i,0,n)cin >> a[i];
	REP(i,0,n)cin >> b[i];
	// REP(i,0,n){
	// 	if(a[i] > b[i]){
	// 		if(x != 0){
	// 			sum += a[i];
	// 			x--;
	// 		}
	// 		else if(x == 0) {
	// 			sum += b[i];
	// 			y--;
	// 		}
	// 	}
	// 	else {
	// 		if(y != 0){
	// 			sum += b[i];
	// 			y--;
	// 		}
	// 		else if(y == 0) {
	// 			sum += a[i];
	// 			x--;
	// 		}
	// 	}
	// }
	sort(a,a+n,greater<int>());
	sort(b,b+n,greater<int>());
	if(n % 2 == 0){
		if(x >= (n/2)-1){
			REP(i,0,n/2)sum += a[i];
		}
		else{
			REP(i,0,x)sum += a[i];
		}
		REP(i,0,n/2){
			sum += a[i];
			sum += b[i];
		}
	}
	else{
		REP(i,0,n/2){
			sum += a[i];
			sum += b[i];
			what_is(sum);
		}
		sum += max(a[n/2],b[n/2]);
	}
	cout << sum << endl;
	return 0;
}