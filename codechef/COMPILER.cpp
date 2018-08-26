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
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		stack<char> s;
		int count = 0;
		if(str[0] == '>')cout << "0" << endl;
		else if(str.length() == 0)cout << "0" << endl;
		else{
			REP(i,0,str.length()){
				if(str[i] == '<'){
					s.push(str[i]);
				}
				else {
					if((!s.empty()) && s.top() == '<'){
						count += 2;
						s.pop();
					}
					else {
						// s.push(str[i]);
					}
				}
			}
			if(!s.empty())cout << "0" << endl;
			else cout << count << endl;
		}
	}
	
	return 0;
}