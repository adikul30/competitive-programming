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
	// Start Solution here
	int t;
	cin >> t;
	REP(i,0,t){
		int n;
		cin >> n;
		vs vstring;
		string s;
		getline(cin, s);
		REP(j,0,n){
			getline(cin, s);
			vstring.pb(s);
		}
		sort(vstring.begin(), vstring.end());
		int max = -1*INF;
		string ans;
		REP(j, 0, n){
			set<char> s;
			REP(k, 0, vstring[j].size()){
				if(vstring[j][k] != ' ')
					s.insert(vstring[j][k]);
			}
			if((int)s.size() > max){
				max = s.size();
				ans = vstring[j];
			}
		}
		cout << "Case #" << (i+1) << ": " << ans << endl;
	}
	// End Solution here
	// cerr << "Solved in " << clock() << " ms" << endl;
	return 0;
}