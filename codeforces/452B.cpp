/*
 *	nerdyninja
 *	Omkar Prabhu <omkar.prabhu15@siesgst.ac.in>
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
	int n;
	cin >> n;
	int a[n];
	REP(i, 0, n) cin >> a[i];
	int ref[72] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	bool flag = false;
	REP(j, 0, 72) {
		if(ref[j] == a[0]){
			bool inter = true;
			REP(i, 0, n){
				if(a[i] != ref[j+i]){
					inter = false;
					break;
				}
			}
			if(inter){
				flag = true;
				break;
			}
		}
	}
	if(flag)printf("Yes\n");
	else printf("No\n");
	// End Solution here
	cerr << "Solved in " << clock() << " ms" << endl;
	return 0;
}