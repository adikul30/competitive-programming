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
	cout << fixed;
   	cout << setprecision(4);
	while(t--){
		double x1,x2,x3,v1,v2;
		cin >> x1 >> x2 >> x3 >> v1 >> v2;
		double t1 = (x3-x1) / v1;
		double t2 = (x2-x3) / v2;
		// what_is(t1);
		// what_is(t2);
		if(t1 < t2) cout << "Chef" << endl;
		else if(t2 < t1) cout << "Kefa" << endl;
		else if(t1 == t2) cout << "Draw" << endl;
	}
	
	return 0;
}