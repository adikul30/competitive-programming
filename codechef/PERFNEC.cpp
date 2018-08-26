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
#define STONE -2
#define GLASS -1
#define QUARTZ 0
#define RUBY 1
#define DIAMOND 2

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
	ll s,g,q,r,d;
	cin >> s >> g >> q >> r >> d;
	ll queries;
	cin >> queries;
	ll beads[queries],beauty[queries];
	ll base[] = { -2, -1, 0, 1, 2 };
	ll cost[] = {s,g,q,r,d};
	REP(i,0,queries){
		cin >> beads[i] >> beauty[i];
	}
	REP(i,0,queries){
		ll minCost = INF;
		if(beads[i] == 0 && beauty[i] == 0)cout << "0" << endl;
		else if(beads[i] == 0 && beauty[i] != 0)cout << "-1" << endl;
		else if(beads[i] == 1){
			switch(beauty[i]){
				case -2: minCost = s;
						 break;
				case -1: minCost = g;
						 break;
				case 0: minCost = q;
						 break;
				case 1: minCost = r;
						 break;
				case 2: minCost = d;
						 break;
				default: minCost = -1;
						 break;
			}
			cout << minCost << endl;
		}
		else if(beads[i] == 2){
			// what_is(i);
			int req = beauty[i];
			// what_is(req);
			REP(j,0,4){
				REP(k,1,5){
					// what_is(base[k-1]);
					// what_is(base[k]);
					if(base[k-1] + base[k] == req){
						// what_is(minCost);
						// what_is(k);
						minCost = min(minCost, (cost[k-1] + cost[k]));
						// what_is(minCost);
					}
				}
			}
			REP(j,0,5){
				// what_is(j);
				// what_is(req);
				if(2 * base[j] == req){
					// what_is(minCost);
					// what_is(j);
					minCost = min(minCost, 2 * cost[j]);
				}
			}
			if(minCost == INF)cout << "-1" << endl;
			else cout << minCost << endl;
		}
		else cout << "0" << endl;
	}

	return 0;
}