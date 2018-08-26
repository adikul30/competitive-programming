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
	vi a,b;
	int temp;
	REP(i,0,5){
		cin >> temp;
		a.pb(temp);
	}
	REP(i,0,5){
		cin >> temp;
		b.pb(temp);
	}
	vi p;
	vi::iterator it;
	REP(i,0,5){
		it = find(b.begin(),b.end(),a[i]);
		cout << (it - b.begin()) << endl;
	}
	
	return 0;
}