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
		int n;
		cin >> n;
		int a[n],b[n],count1 = 0,count2 = 0,maximum = 0;
		REP(i,0,n){
			cin >> a[i] >> b[i];
			if(a[i] > b[i]){
				count1 ++;
				maximum = max(maximum, a[i]);
			}
			else{
				count2++;
				maximum = max(maximum, b[i]);
			}
		}
		if(count1 > count2)cout << count1 << " " << maximum;
		else cout << count2 << " " << maximum;
		cout << endl;
	}
	
	return 0;
}