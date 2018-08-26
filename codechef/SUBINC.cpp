/*
 *	adikul30
 *	Aditya Kulkarni <aditya.kulkarni15@siesgst.ac.in>
 */
#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define REPR(i, a, b) for(int i = a; i >= b; --i)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define what_is(x) cerr << #x << " is " << x << endl;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;

int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		ll count = 0,subcount = 0;
		cin >> n;
		int a[n],dp[n];
		count += n;
		REP(i,0,n)cin >> a[i];
		REP(i,0,n-1){
			subcount = 0;
			if(i == 0 || dp[i-1] == 0){
				REP(j,i+1,n){
					if(a[j] >= a[j-1])subcount++;
					else break;
				}
			}
			else subcount = dp[i-1] - 1;
			
			dp[i] = subcount;
			count += subcount;
		}
		cout << count << endl;
	}
	
	return 0;
}