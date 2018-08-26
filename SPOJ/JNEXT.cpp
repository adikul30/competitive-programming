/*
 *	adikul30
 *	Aditya Kulkarni <aditya.kulkarni15@siesgst.ac.in>
 */
#include <bits/stdc++.h>
 
using namespace std;
 
#define INF 1e9
#define EPS 1e-9
#define REP(i, a, b) for(i = a; i < b; ++i)
#define REPR(i, a, b) for(i = a; i >= b; --i)
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
	int t;
	cin >> t;
	while(t--){
		ll n,x;
		int i,j,k,pos;
		cin >> n;
		ll a[n+10];
		REP(i,0,n)cin >> a[i];
		REPR(i,n-1,1){
		    if(a[i] > a[i-1])break;
		}
		if(i == 0)cout << "-1" <<endl;
		else{
		    x = a[i-1];
		    what_is(x);
		    pos = i;
		    what_is(pos);
		    REP(j,i,n){
		    	what_is(a[j]);
		    	what_is(a[pos]);
		        if(a[j] > x && a[j] < a[pos])pos = j;
		    }
		    what_is(pos);
		    swap(a[pos],a[i-1]);
		    sort(a + i, a + n);
		    REP(k,0,n)cout << a[k];
		    cout << endl;
		}
	}
	
	return 0;
}