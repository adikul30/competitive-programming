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
		int k,a,b;
		cin >> k;
		string s;
		cin >> s;
		int length = s.length();
		if(s[0] == s[length - 1])cout << "NO" << endl;//First and last are same
		else{
			REP(i,0,n){
				if(s[i] == "?"){
					if(i == 0)a = s[length - 1];
					else a = s[i-1];

					if(i == length - 1)b = s[0];
					else b = s[i+1];

					
				}
			}
		}
	}
	return 0;
}