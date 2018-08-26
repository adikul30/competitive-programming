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

int main()
{	
	int n;
	scanf("%d",&n);
	int s[n+10],d[n+10],last;
	REP(i,0,n)scanf("%d %d",&s[i],&d[i]);
	last = s[0];
	REP(i,1,n){
		while(s[i] <= last){
			s[i] += d[i];
		}
		last = s[i];
	}
	printf("%d\n",s[n-1]);
	return 0;
}