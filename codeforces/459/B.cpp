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
typedef map<string,string> mss;

int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int n,m;
	cin >> n >> m;
	mss hmap;
	REP(i,0,n){
		string name,ip;
		cin >> name >> ip;
		hmap[ip] = name;
	}
	REP(i,0,m){
		string command, commentIp;
		cin >> command >> commentIp;
		int len = commentIp.length() - 1;
		string temp = commentIp.substr(0,len);
		if(hmap.count(temp)){
			cout << command << " " << commentIp << " #" << hmap[temp];
		}
		cout << endl;
	}
	return 0;
}