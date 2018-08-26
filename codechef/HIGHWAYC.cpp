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
	cout << fixed;
   	cout << setprecision(6);
	int t;
	cin >> t;
	while(t--){
		int n,s,y;
		cin >> n >> s >> y;
		double v[n],d[n],p[n],c[n];
		double mintime = 0.0;
		REP(i,0,n) cin >> v[i];
		REP(i,0,n) cin >> d[i];
		REP(i,0,n) cin >> p[i];
		REP(i,0,n) cin >> c[i];
		if(n == 1){
			mintime += (double) y / s;
			// what_is(mintime);
			double dist = abs(p[0]);
			double time = dist / v[0];
			// what_is(time);
			// what_is(mintime);
			if(time < mintime || abs(time - mintime) < 0.000001){
				mintime += (abs(p[0]) + c[0]) / v[0];
			}
		}
		cout << mintime << endl;
	}
	
	return 0;
}