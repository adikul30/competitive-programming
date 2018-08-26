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
	int hh,mm;
	cin >> hh >> mm;
	double h,d,c,n;
	cin >> h >> d >> c >> n;
	double discount,minimum;
	cout << fixed;
   	cout << setprecision(4);
	if(hh >= 20){
		discount = (ceil(double(h/n)) * c) / 5;
		minimum = (ceil(h/n) * c) - discount;
	}
	else{
		minimum = ceil(double(h/n)) * c;
		hh = 20 - hh - 1;
		mm = 60 - mm;
		int minutes = 60 * hh + mm;
		int newHunger = minutes * d + h;
		discount = (ceil(newHunger/n)*c) / 5;
		minimum = min(minimum,(ceil(newHunger/n) * c) - discount);
	}
	cout << minimum << endl;
	return 0;
}