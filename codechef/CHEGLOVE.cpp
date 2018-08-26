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
		int n,count1 = 0,count2 = 0;
		cin >> n;
		ll l[n],g[n];
		REP(i,0,n)cin >> l[i];
		REP(i,0,n)cin >> g[i];
		REP(i,0,n){
			if(l[i] <= g[i]){
				count1++;
			}
			if(l[i] <= g[n-i-1]){
				count2++;
			}
		}
		if(count1 == n && count2 == n)cout << "both" << endl;
		else if(count1 == n && count2 != n)cout << "front" << endl;
		else if(count2 == n && count1 != n)cout << "back" << endl;
		else cout << "none" << endl;
	}
	
	return 0;
}