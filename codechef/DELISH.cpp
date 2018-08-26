/*
 *	adikul30
 *	Aditya Kulkarni <aditya.kulkarni15@siesgst.ac.in>
 */
#include <bits/stdc++.h>
 
using namespace std;
 
#define INF 1e9
#define EPS 1e-9
#define REP(i, a, b) for(ll i = a; i < b; ++i)
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
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll d[n+10],sum1 = 0,sum2 = 0,flag = 0,pos = 0,neg = 0,temp = 0,best = 0;
		ll l2r[n],r2l[n];
		REP(i,0,n){
			cin >> d[i];
			if(d[i] < 0)neg++;
			if(i == 0)l2r[i] = d[i];
			else l2r[i] = l2r[i-1] + d[i];
		}
		r2l[n-1] = d[n-1];
// 		what_is(r2l[n-1]);
		best = abs(d[n-1] - l2r[n-2]);
		REPR(i,n-2,1){
		  //  what_is(i);
		    r2l[i] = r2l[i+1] + d[i];
		  //  what_is(r2l[i]);
		  //  what_is(l2r[i-1]);
		    temp = abs(l2r[i-1] - r2l[i]);
		  //  what_is(temp);
		    best = max(temp,best);
		  //  what_is(best);
		}
		cout << best << endl;
	}		
	return 0;
} 