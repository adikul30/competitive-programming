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
	long long int n,q;
	cin >> t;
	while(t--){
		cin >> n >> q;
		long long int d[n],x[q];
		REP(i,0,n)cin >> d[i];
		REP(i,0,q){
			int flag = 0;
			cin >> x[i];
			REP(j,0,n){
				x[i] = floor(x[i] / d[j]);
				if(x[i] == 0){
					cout << "0 ";
					flag = 1;
					break;
				}
			}
			if(flag==0)cout << x[i] << " ";
		}
		cout << endl;
	}
	return 0;
}