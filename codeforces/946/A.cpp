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
	int n;
	cin >> n;
	int a[n];
	int poscount = 0,sum = 0,seq1 = 0,seq2 = 0;
	REP(i,0,n){
		cin >> a[i];
		sum += a[i];
		if(a[i] >= 0)poscount++;
	}
	if(poscount == n){
		cout << sum << endl;
	}
	else{
		sort(a,a+n,greater<int>());
		REP(i,0,n){
			if(a[i] >= 0)seq1+=a[i];
			else seq2 += a[i];
		}
		cout << seq1 - seq2 << endl;
	}

	
	return 0;
}