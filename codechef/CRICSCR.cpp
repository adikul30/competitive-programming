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
	ll n;
	cin >> n;
	ll r[n],w[n];
	ll runs,wickets;
	int flag = 0;
	REP(i,0,n){
		cin >> r[i] >> w[i];
		if(i == 0 && n == 1 && w[i] > 10){
			flag = 1;
			break;
		}
		else if (i == 0){
			runs = r[i];
			wickets = w[i];
		}
		else {
			if (r[i] < runs || w[i] < wickets){
				flag = 1;
				break;
			}
			else if(w[i] > 10){
				flag = 1;
				break;
			}
			else{
				runs = r[i];
				wickets = w[i];
			}
		}
	}
	if(flag)cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}