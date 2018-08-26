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
		int n,res,flag=0;
		cin >> n;
		int a[n];
		cin >> res;
		REP(i,0,n)scanf("%d",&a[i]);
		int lb,ub;
		lb = -1*INF;
		ub = INF;
		REP(i,0,n){
			if(a[i] > res){
				if(a[i] > ub){
					flag=1;
				}
				else ub = a[i];
			}
			else if(a[i] < res){
				if(a[i] < lb){
					flag=1;
				}
				else lb = a[i];
			}
		}
		if(flag)
			printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}