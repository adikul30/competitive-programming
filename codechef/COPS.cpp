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
	int t,j;
	cin >> t;
	while(t--){
		int h[110] = {};
		int m,x,y;
		cin >> m >> x >> y;
		int a[m];
		REP(i,0,m)cin >> a[i];
		sort(a,a+m);
		REP(i,0,m){
			//1 is unsafe , 0 is safe
			j = a[i];
			h[j] = 1;
			j--;
			int count = x*y;
			while(j!=0 && count!=0){
				h[j] = 1;
				count--;
				j--;
			}
			count = x*y;
			j = a[i];
			j++;

			while(j!=101 && count!=0){
				h[j] = 1;
				count--;
				j++;
			}
		}
		int safe=0;
		REP(i,1,101){
			if(h[i]==0)safe++;
		}
		printf("%d\n",safe);
	}
	
	return 0;
}