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
		string s;
		vector<char> a,b;
		a.clear();
		b.clear();
		cin >> s;
		int size = s.length();
		if(size % 2 == 0){	//even
			REP(i,0,size/2) a.pb(s[i]);
			REP(i,size/2,size) b.pb(s[i]);
		}
		else{	//odd
			REP(i,0,size/2) a.pb(s[i]);
			REP(i,(size/2)+1,size) b.pb(s[i]);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		if(a == b)printf("YES\n");
		else printf("NO\n");
		// REP(i,0,a.size())cout << a[i];
		// cout << endl;
		// REP(i,0,b.size())cout << b[i];
		// cout << endl;
	}
	
	
	return 0;
}