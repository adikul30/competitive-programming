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
		int n,k,s;
		cin >> n >> k >> s;
		int min = k*s;
		int flag = 0;
		if(n >= min)printf("1\n");
		else{
			int sundays = s / 7;
			// what_is(sundays);
			s -= sundays;
			// what_is(s);
			REP(i,1,s+1){
				if(n*i >= min){
					cout << i << endl;
					flag = 1;
					break;
				}
			}
			if(flag == 0)cout << "-1" << endl;
		}
	}
	
	return 0;
}