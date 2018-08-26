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
	int l,r,a,temp;
	cin >> l >> r >> a;
	if(l < r){
		if(a >= r-l){
			temp = r-l;
			l += temp;
			a -= temp;
		}
		else {
			l += a;
			a -= a;
		}
	}
	else if(l > r){
		if(a >= l-r){
			what_is(l);
			what_is(r);
			what_is(a);
			temp = l-r;
			r += temp;
			a -= temp;

			what_is(l);
			what_is(r);
			what_is(a);

		}
		else {
			r += a;
			a -= a;
		}
	}
	else if(l == r){
		l += a/2;
		r += a/2;
		a -= a;
	}
	what_is(l);
	what_is(r);
	what_is(a);
	if(a % 2 != 0)a -= 1;
	cout << ((2 * min(l,r)) + a) << endl;
	return 0;
}