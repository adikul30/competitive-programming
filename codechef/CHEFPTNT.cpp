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
		int n,m,x,k;
		int evenw = 0,oddw = 0,evenm = 0,oddm = 0,count = 0;
		string str;
		cin >> n >> m >> x >> k;
		cin >> str;
		if(m % 2 == 0)evenm = oddm = m/2;
		else {
			evenm = m/2;
			oddm = evenm + 1;
		}
		REP(i,0,str.length())(str[i] == 'E'? evenw++:oddw++);
		if(x == 0)cout << "no" << endl;
		else if(k < n)cout << "no" << endl;
		else if(m * x < n)cout << "no" << endl;
		else{
			REP(i,0,oddm){
				if(oddw >= 1 && x >= 1){
					if(oddw >= x){
						count += x;
						oddw -= x;
					}
					else{
						count += oddw;
						oddw -= oddw;
					}
				}
			}
			REP(i,0,evenm){
				if(evenw >= 1 && x >= 1){
					if(evenw >= x){
						count += x;
						evenw -= x;
					}
					else{
						count += evenw;
						evenw -= evenw;
					}
				}
			}
			if(count >= n)cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
	
	return 0;
}