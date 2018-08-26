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

int containsSeven(int h, int m){
	int a[4];
	a[0] = h/10;
	a[1] = h%10;
	a[2] = m/10;
	a[3] = m%10;
	if(a[0] == 7 || a[1] == 7 || a[2] == 7 || a[3] == 7)return 1;
	return 0;
}

int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int x;
	cin >> x;
	int h, m;
	cin >> h >> m;
	int ans = containsSeven(h,m);
	if(ans)cout << "0" << endl;
	else {
		int flag = 0;
		int count = 0;
		while(flag != 1){
			count ++;
			m -= x;
			if(m < 0){
				m = 60 + m;
				h -= 1;
				if(h < 0)h = 24 + h;
			}
			if(containsSeven(h,m)){
				flag = 1;
				break;
			}
		}
		cout << count << endl;
	}
		
	return 0;
}