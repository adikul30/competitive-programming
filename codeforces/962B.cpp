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
	ll n,a,b;
	cin >> n >> a >> b;
	ll total = a + b, count = 0;
	string s;
	cin >> s;
	for (int i = n-1; i >= 0; i--){
		if (count == total) break;
		if (s[i] == '*') continue;
		else if (s[i] == '.') {
			if (i == n-1) {
				s[i] = 'A';
				count++;
			}
			else if (i == 0) {
				if (s[i+1] != 'A') {
					s[i] = 'A';
					count++;
				}
				else if (s[i+1] != 'B') {
					s[i] = 'B';
					count++;
				}
			}
			else if ((s[i+1] != 'A') && (s[i-1] != 'A')) {
				s[i] = 'A';
				count++;
			}
			else if ((s[i+1] != 'B') && (s[i-1] != 'B')) {
				s[i] = 'B';
				count++;
			}
		}
	}
	cout << count << endl;
	
	return 0;
}