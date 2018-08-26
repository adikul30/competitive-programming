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
	ll c[n],t[n];
	REP(i,0,n)cin >> c[i];
	REP(i,0,n)cin >> t[i];
	ll minT = INF,minA = INF,minC = INF;
	REP(i,0,n){
		if(t[i] == 1 && c[i] < minT){
			minT = c[i];
		}
		else if(t[i] == 2 && c[i] < minA){
			minA = c[i];
		}
		else if(t[i] == 3 && c[i] < minC){
			minC = c[i];
		}
	}
	cout << min((minA + minT),minC) << endl;
	return 0;
}