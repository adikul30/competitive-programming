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
	int t,n,temp;
	cin >> t;
	while(t--){
		cin >> n;
		VI v;
		VI::iterator it;
		REP(i,0,n){
			cin >> temp;
			v.PB(temp);
		}
		int all = 0;
		REP(i,1,8){
			it = find(v.begin(),v.end(),i);
			if(it == v.end()){
				all = 1;
				break;
			}
		}
		if(all)printf("no\n");
		else{
			int flag = 0;
			REP(i,0,n/2){
				if(v[i] != v[n-i-1]){
					printf("no\n");
					flag = 1;
					break;
				}
			}
			if(flag == 0)printf("yes\n");
		}
	}
	return 0;
}