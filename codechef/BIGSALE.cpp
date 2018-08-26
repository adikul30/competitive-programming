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
		double p[n],q[n],d[n];
		double loss = 0.0,temp = 0.0;
		cout << fixed;
    	cout << setprecision(8);
		REP(i,0,n)cin >> p[i] >> q[i] >> d[i];
		REP(i,0,n){
			temp = p[i];
			p[i] += p[i] * (d[i]/100);
			p[i] -= p[i] * (d[i]/100);
			loss += (temp - p[i]) * q[i];
		}

		cout << loss << endl;
	}
	
	return 0;
}