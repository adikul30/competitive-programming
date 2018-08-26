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
	int n,m;
	scanf("%d %d",&n,&m);
	int a[m],min = INF;
	REP(i,0,m)scanf("%d",&a[i]);
	sort(a,a+m);
	for (int i = m-1; i >= n-1 ; i--){
		if(a[i]-a[i-n+1] < min)min = a[i]-a[i-n+1];
	}
	printf("%d\n", min);
	return 0;
}
//5 7 10 10 12 22