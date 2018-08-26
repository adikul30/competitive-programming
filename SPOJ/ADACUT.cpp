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
	int n;
	cin >> n;
	ll a[n],dp1[n],dp2[n];
	REP(i,0,n)cin >> a[i];
	sort(a,a+n);
	REP(i,0,n){
		if(i==0)dp1[i] = 0;
		else dp1[i] = dp1[i-1] + a[i-1];
	}
	REPR(i,n-1,0){
		if(i==n-1)dp2[i] = 0;
		else dp2[i] = abs(a[i]-a[i+1])*(n-1-i) + dp2[i+1];
	}
	ll min = 1e18;
	REP(i,0,n)
		if(dp1[i] + dp2[i] < min){min = dp1[i] + dp2[i];}
	printf("%lld\n", min);
	return 0;
} 