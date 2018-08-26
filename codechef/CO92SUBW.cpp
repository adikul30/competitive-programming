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
		int x;
		cin >> x;
		if(x < 3)cout << x << endl;
		else if(x == 3)cout << "2" << endl;
		else{
			int count = 1;		//home se station 1 tak
			int pos = 1;
			int incr = 2;
			while(pos < x){
				if(abs(pos - x) > abs(pos + incr - x)){
					pos += incr;
					count += 1;
					incr += 1;
				}
				else break;
			}
			cout << count + abs(pos - x) << endl;
		}
	}
	
	return 0;
}