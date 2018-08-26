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
		int n,temp;
		int total=0,evenSum,oddSum,diff=0;
		cin >> n;
		int v[n+10][n+10],d[n+10][n+10];
		REP(i,1,n+1){
			REP(j,1,n+1)v[i][j] = i+j;
		}
		REP(i,1,n+1){
			REP(j,1,n+1){
				temp = v[i][j];
				evenSum=0;oddSum=0;
				while(temp % 10 != 0){
					if(temp % 10 % 2 == 0)evenSum+=(temp % 10);
					else oddSum+=(temp % 10);
					temp/=10;
				}
				diff = abs(evenSum - oddSum);
				total += diff;
			}
		}
		printf("%d\n",total);
	}
	return 0;
}