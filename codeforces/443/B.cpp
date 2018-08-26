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
	int n,x;
	long long k;
	queue<int> q;
	scanf("%d %lld",&n,&k);
	REP(i,0,n){
		scanf("%d",&x);
		q.push(x);
	}
	int winlast;
	long long win = 0;
	int a = q.front();
	q.pop();
	int b = q.front();
	q.pop();
	// printf("%d %d\n", a, b);
	if(a>b){
		winlast = a;
		q.push(b);
	}
	else {
		winlast = b;
		q.push(a);
	}
	win++;
	// printf("%d\n",winlast);
	while(win != k && win <= n-1){
		a = winlast;
		b = q.front(); q.pop();
		if(a>b){
			win++;
			q.push(b);
		}
		else {
			winlast = b;
			win = 1;
			q.push(a);
		}
	}	
	printf("%d\n",winlast);
	return 0;
}