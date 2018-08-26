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
	ios_base::sync_with_stdio(0);
	int n,count = 0;
	ll d;
	cin >> n >> d;
	ll l[n+10];
	REP(i,0,n)cin >> l[i];
	sort(l, l+n);
	REP(i,0,n-1){
		if(abs(l[i] - l[i+1]) <= d){
			count++;
			i = i + 1;
		}
	}
	cout << count << endl;
	return 0;
}