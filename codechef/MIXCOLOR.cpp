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
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
        ll n;
        cin >> n;
        multiset<ll> s;
        ll count = 0,tempCount = 0;
        ll a[n];
        REP(i,0,n){
            cin >> a[i];
            s.insert(a[i]);
        }
        sort(a,a+n);
        REP(i,0,n){
        	tempCount = s.count(a[i]);
            if(tempCount > 1){
                count += tempCount - 1;
                i = i + tempCount - 1;
            }
        }
        cout << count << endl;
	}
	return 0;
}