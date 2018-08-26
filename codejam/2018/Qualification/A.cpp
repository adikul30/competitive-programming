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
		ll d;
		cin >> d;
		string s;
		cin >> s;
		int length = s.length();
		ll charge = 0, shoot = 0, totalDamage = 0, currentStrength = 1;
		REP (i,0,length){
			if (s[i] == 'c') charge++;
			else shoot++;
		}
		if (shoot == length){
			if (d < shoot)cout << "IMPOSSIBLE" << endl;
			else cout << "0" << endl;
		}
		else if (charge == length)cout << "0" << endl;
		else {
			int pos;
			REP (i,0,length){
				if (s[i] == 'c'){
					pos = i;
					currentStrength *= 2;
				}
				else {
					totalDamage += currentStrength;
				}
			}
			what_is(totalDamage);
			if (d >= totalDamage) cout << "0" << endl;
			else {
				
			}
		}
	}

	
	return 0;
}