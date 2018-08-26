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
		int n;
		cin >> n;
		ll sum1 = 0,sum2 = 0;
		int a[n],b[n];
		REP(i,0,n){
			cin >> a[i];
			sum1 += a[i];
		}
		REP(i,0,n){
			cin >> b[i];
			sum2 += b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		sum1 -= a[n-1];
		sum2 -= b[n-1];
		if(sum1 < sum2)cout << "Alice" << endl;
		else if(sum2 < sum1)cout << "Bob" << endl;
		else if(sum1 == sum2)cout << "Draw" << endl;
	}
	
	return 0;
}