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

void fillSet(set<int>& s, int &m){
	while(m != 0){
		s.insert(m%10);
		m /= 10;
	}
}

int isSetComplete(set<int>& s){
	int i = 1;
	for(i = 0; i < 10; i++){
		if(s.count(i) == 1)continue;
		else break;
	}
	if(i == 10)return 1;
	else return 0;
}

int main()
{
	int t;
	cin >> t;
	REP(i,1,t+1){
		int n;
		cin >> n;
		if(n == 0)cout << "Case #" << i << ": INSOMNIA" << endl;
		else {
			int count = 1;
			int m = n,temp;
			set<int> s;
			while(1){
				fillSet(s,m);
				if(isSetComplete(s)){
					cout << "Case #" << i << ": " << temp << endl;
					break;
				}
				else{
					count++;
					m = count * n;
					temp = m;
					fillSet(s,m);
				}
			}
		}
	}
	
	return 0;
}