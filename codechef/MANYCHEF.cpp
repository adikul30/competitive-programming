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

bool isCHEF(char C, char H, char E, char F){
	if((C == 'C' || C == '?') && (H == 'H' || H == '?') && (E == 'E' || E == '?') && (F == 'F' || F == '?')){
		return true;
	}
	return false;
}

int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int length = s.length();
		for(int i = length - 1; i >= 0; i--){
			if(i >= 3 && isCHEF(s[i-3],s[i-2],s[i-1],s[i])){
				s[i-3] = 'C';
				s[i-2] = 'H';
				s[i-1] = 'E';
				s[i-0] = 'F';
				i -= 3;
			}
			else{
				if(s[i] == '?')s[i] = 'A';
			}
		}
		cout << s << endl;
	}
	
	return 0;
}