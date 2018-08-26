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
#define MAX 100010
#define MOD (ll)1e9 + 7

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;

bool visited[MAX];
vi adj[MAX];
ll fire = 0,eachdfs = 0;

void dfs(int s){
	if (visited[s]) return;
	eachdfs++;
	visited[s] = true;
	for (auto u : adj[s]){
		dfs(u);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		int x,y;
		cin >> n >> m;
		REP(i,1,n+1) {
			visited[i] = false;
			adj[i].clear();
		}
		REP(i,0,m) {
			cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		fire = 0;
		ll ans = 1;
		REP(i,1,n+1) {
			eachdfs = 0;
			if(!visited[i]){
				dfs(i);
				fire++;
				ans *= eachdfs;
				if(ans >= MOD)ans %= MOD; 
			}

		}
		cout << fire << " " << ans << endl;
	}
	
	return 0;
}