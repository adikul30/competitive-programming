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
		int n,m;
		cin >> n >> m;
		int a[n+1][m+1];
		REP(i,0,n){
			REP(j,0,m)cin >> a[i][j];
		}
		REP(i,0,n){
			REP(j,0,m){
				if(a[i][j] == -1){
					if(i == 0 && j == 0)a[i][j] = 1;
					else if(j == 0)a[i][j] = a[i-1][j];
					else if(i == 0)a[i][j] = a[i][j-1];
					else{
						a[i][j] = max(a[i-1][j],a[i][j-1]);
					}
				}
			}
		}
		int flag = 0;
		REP(i,0,n){
			REP(j,0,m-1){
				if(a[i][j+1] < a[i][j]){
					flag = 1;
					break;
				}
			}
			if(flag == 0){
				if((a[i+1][0] < a[i][0]) && i != n-1){
					flag = 1;
					break;
				}
			}
			else break;
		}
		if(flag == 1)cout << "-1" << endl;
		else{
			REP(i,0,n){
				REP(j,0,m)cout << a[i][j] << " ";
				cout << endl;
			}
		}
	}
	
	return 0;
}