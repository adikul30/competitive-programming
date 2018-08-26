#include <bits/stdc++.h>

using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define PB push_back
#define MP make_pair

typedef long long ll;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

const float PI = 3.1415926535897932384626433832795;
const int MOD = 1000000007;

int visited[11];
VI v[11];

void dfs(int index){
	if (visited[index]==1){
		return;
	}
	else{
		visited[index] = 1;
		REP(i,0,v[index].size()){
			if (visited[v[index][i]]!=1)
			{
				dfs(v[index][i]);
			}
		}
	}
}

int main()
{	
	int t,n,e,w,i,x,y;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&n,&e,&w);
		int wt[n];
		REP(i,0,n)visited[i]=0;
		REP(i,0,n)	scanf("%d",&wt[i]);
		REP(i,1,n+1)v[i].clear();
		REP(i,0,n){
			scanf("%d %d",&x,&y);
			v[x].PB(y);	//Undirected
			v[y].PB(x);
		}

		// REP(i,1,n+1){
		// 	REP(j,0,v[i].size()) printf("%d ",v[i][j]);
		// 	printf("\n");
		// }
		dfs(1);
		if (visited[n]==1)
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}