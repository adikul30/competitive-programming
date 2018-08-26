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

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;

bool visited[MAX];
vi adj[MAX];
ll ans = 0;

void dfs(int s){
	if (visited[s]) return;
	visited[s] = true;
	for (auto u : adj[s]){
		dfs(u);
	}
}

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
		int e;
		cin >> e;
		int x,y;
		REP(i,0,n) {
			visited[i] = false;
			adj[i].clear();
		}
		REP(i,0,e) {
			cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		if(e == 0){
			cout << n << endl;
		}
		else{
			ans = 0;
			REP(i,0,n) {
				if(!visited[i]){
					dfs(i);
					ans++;
				}
			}
			REP(i,0,n) {
				if(!visited[i])ans++;
			}
			cout << ans << endl;
		}
	}
	
	return 0;
}