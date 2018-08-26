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
		// cout << "case" << endl;
		int n,min = 0;
		cin >> n;
		int w[n];
		REP(i,0,n)cin >> w[i];
		sort(w,w+n);
		REP(i,0,n)min+=w[i]-w[0];
		cout << min << endl;

	}
	return 0;
}