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
	int t;
	cin >> t;
	while(t--){
		string str,dummy;
		cin >> str;
		dummy = str;
		int len = str.length();
		int pos;
		if(len % 2 == 0)pos = (len / 2) - 1;
		else pos = (len / 2);
		sort(dummy.begin(),dummy.begin() + pos + 1);
		sort(dummy.begin() + pos + 1,dummy.end(),greater<char>());
		what_is(dummy);
		string palin = dummy;
		reverse(dummy.begin(),dummy.end());
		what_is(dummy);
		if(dummy == palin)cout << "palindrome" << endl;
		else cout << "-1" << endl;
	}
	
	return 0;
}