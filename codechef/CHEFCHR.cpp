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

int containsWord(string& str, int& pos){
	int count = 0;
	string temp = str.substr(pos,4);
	size_t foundc = temp.find("c");
	size_t foundh = temp.find("h");
	size_t founde = temp.find("e");
	size_t foundf = temp.find("f");
	if(foundc != string::npos && foundh != string::npos && founde != string::npos && foundf != string::npos)
		return 1;
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		int count = 0;
		REP(i,0,str.length()){
			if(containsWord(str,i)){
				count++;
			}
		}
		if(count == 0)cout << "normal" << endl;
		else cout << "lovely " << count << endl;
	}	
	return 0;
}