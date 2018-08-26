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
	int n,m,i,count,index;
	cin >> n >> m;
	char op[n+10];
	int dies[m+10];
	REP(i,0,n)cin >> op[i];
	REP(i,0,m)scanf("%d",&dies[i]);
	index = 1;
	count = 1;

	REP(i,0,m){
		if (op[index-1] == '+'){
			if (index + dies[i] <= n){
				index = index + dies[i];
				if (index==1)count++;
			}
		}
		else{
			if (index - dies[i] >= 1){
				index = index - dies[i];
				if (index==1)count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}