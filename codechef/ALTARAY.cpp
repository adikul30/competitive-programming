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
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+10],len[n+10];
		REP(i,1,n+1)cin >> a[i];
		len[n] = 1;
		for (int i = n-1; i >= 1; i--){
			if(a[i] * (long long) a[i+1] < 0)
				len[i] = len[i+1] + 1;
			else len[i] = 1;
		}
		REP(i,1,n+1)printf("%d ",len[i] );
		printf("\n");
	}	
	return 0;
}