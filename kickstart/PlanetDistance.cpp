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
#define MAX 100

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;

bool visited[MAX],hasCycle;
vi adj[MAX];
int start,ending;

void makeCycle(int a, int b){

}

void dfs(int s, int parent){
	// if (visited[s]) return;
	visited[s] = true;
	// cout << s << endl;
	for (auto u : adj[s]){
		// what_is(u);
		// what_is(parent);
		if(!visited[u])
			dfs(u,s);
		else if(u != parent){
			// cout << "inside if" << endl;
			what_is(s);
			what_is(u);
			start = s;
			ending = u;
			what_is(parent);
			hasCycle = true;
			return;
		}
	}
}

int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	REP(i,1,t+1){
		int n,x,y;
		cin >> n;
		REP(i,1,n+1) {
			adj[i].clear();
			visited[i] = false;
		}
		REP(i,0,n){
			cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		REP(i,1,n+1){
			if(!visited[i]){
				dfs(i,-1);
				what_is(i);
				if(hasCycle)
					break;
			}
		}
		what_is(start);
		what_is(ending);
		makeCycle(start,ending);
	}

	return 0;
}

/*
	adj[1].pb(2);
	adj[2].pb(1);
	adj[2].pb(3);
	adj[3].pb(2);
	adj[3].pb(4);
	adj[4].pb(3);
	adj[2].pb(4);
	adj[4].pb(2);
	adj[5].pb(3);
	adj[3].pb(5);
*/