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
		cin >> n;
		vi v[n];
		int temp;
		REP(i,0,n){
			REP(j,0,n){
				cin >> temp;
				v[i].pb(temp);
			}
		}
		REP(i,0,n)sort(v[i].begin(), v[i].end());
		ll ans = 0;
		int flag1 = 0,flag2 = 0;
		int prev = v[n-1][n-1];
		ans += prev;
		REPR(i,n-2,0){
			flag1 = 0,flag2 = 0;
			REPR(j,n-1,0){
				if(v[i][j] < prev){
					ans += v[i][j];
					prev = v[i][j];
					flag1 = 1;
					break;
				}
			}
			if(flag1 == 0){
				flag2 = 1;
				printf("-1\n");
				break;
			}
		}
		if(flag2 == 0)printf("%lld\n",ans);
	}
	
	return 0;
} 