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

void step1(ll &, ll &);
void step2(ll &, ll &);
void step3(ll &, ll &);


void step3(ll &a, ll &b){
	if(b >= 2 * a){
		b -= 2 * a;
		step1(a,b);
	}
	else cout << a << " " << b << endl;
}

void step2(ll &a, ll &b){
	if(a >= 2 * b){
		a -= 2 * b;
		step1(a,b);
	}
	else {
		step3(a,b);
	}
}

void step1(ll &a, ll &b){
	if(a == 0 || b == 0)
		cout << a << " " << b << endl;
	else {
		step2(a,b);
	}
}

int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	ll n,m;
	cin >> n >> m;
	step1(n,m);
	return 0;
}