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
	int n;
	cin >> n;
	ll a[n+10];
	REP(i,0,n)cin >> a[i];
	ll count = 0,eq;
	sort(a,a+n);
	REP(i,0,n-1){
		int j = i;
		eq = 0;
		while(a[j] == a[j+1]){
			eq++;
			j++;
		}
		if(eq>0)eq += 1;
		count += (eq*(eq-1))/2;
		i = j;
	}
	printf("%lld\n", count);

	return 0;
}