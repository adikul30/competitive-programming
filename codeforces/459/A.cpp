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
	int f0 = 0,f1 = 1,f;
	int pos = n+1;
	REP(i,1,n+1){
		f = f0 + f1;
		if(f > n){
			pos = i;
			break;
		}
		a[i] = f;
		f0 = f1;
		f1 = f;
	}
	int k = 1;
	REP(i,1,n+1){
		if(i == a[k] && k < pos){
			cout << "O";
			k++;
		}
		else cout << "o";
	}
	cout << endl;
	return 0;
}
// 0 1 1 2 3 5 8