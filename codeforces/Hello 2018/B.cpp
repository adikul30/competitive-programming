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
vi v[1010];
int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int a[n+10];
	REP(i,1,n)cin >> a[i];
	REP(i,1,n)v[a[i]].pb(i+1);
	int count = 0,flag;
	REP(i,1,n){
		flag = 0;
		// what_is(i);
		int length = (int)v[i].size();
		// what_is(length);
		if(length != 0){
			// what_is(i);
			count = 0;
			REP(j,0,length){
				// what_is((int)v[v[i][j]].size());
				if((int)v[v[i][j]].size() == 0){
					count++;
					// what_is(count);
				}
			}
			if(count < 3){
				flag = 1;
				break;
			}
		}
	}
	if(flag == 0)printf("Yes\n");
	else printf("No\n");
	return 0;
}