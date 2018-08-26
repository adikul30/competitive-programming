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
		int a[4];
		REP(i,0,4)cin >> a[i];
		if(a[0] == a[1]){
			if(a[2] == a[3])printf("YES\n");
			else printf("NO\n");
		}
		else if(a[0] == a[2]){
			if(a[1] == a[3])printf("YES\n");
			else printf("NO\n");
		}
		else if(a[0] == a[3]){
			if(a[1] == a[2])printf("YES\n");
			else printf("NO\n");
		}
		else printf("NO\n");
	}
	
	return 0;
}