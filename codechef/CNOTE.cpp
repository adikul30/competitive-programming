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
	int t,x,y,k,n;
	cin >> t;
	while(t--){
		cin >> x >> y >> k >> n;
		int p[n],c[n],flag = 0;
		REP(i,0,n)cin >> p[i] >> c[i];
		REP(i,0,n){
			if(k >= c[i]){
				if(p[i] >= (x-y)){
					printf("LuckyChef\n");
					flag = 1;
					break;
				}
			}
		}
		if(flag == 0)printf("UnluckyChef\n");
	}	
	return 0;
}