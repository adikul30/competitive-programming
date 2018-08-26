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
	int n,temp,flag = 0;
	while(cin >> n && n != 0) {
		stack<int> s;

		vi v,a;
		REP(i,0,n){
			cin >> temp;
			v.pb(temp);
		}
		// REP(i,0,n)cout << v[i];
		// cout << endl;
		REP(i,0,n){
			// what_is(i);
			// what_is(v[i]);
			// what_is(v[i+1]);
			if((v[i] > v[i+1]) && i != n-1){
				// cout << "inside if" << endl;

				while(!s.empty() && s.top() <= v[i]){
					a.pb(s.top());
					s.pop();
				}
				s.push(v[i]);
				
				// v.erase(std::remove(v.begin(), v.end(), v[i]), v.end());
			}
			else {
				// cout << "inside else" << endl;
				int k = i;
				// what_is(k);
				while(!s.empty() && s.top() <= v[k]){
					a.pb(s.top());
					s.pop();
				}
				// what_is(v[i]);
				a.pb(v[i]);
			}
			// if(!s.empty())what_is(s.top());
			// cout << "v :";
			// REP(i,0,n)cout << v[i];
			// cout << endl;
			// cout << "a :";
			// REP(i,0,(int)a.size())cout << a[i];
			// cout << endl << endl;
		}
		while(!s.empty()){
			a.pb(s.top());
			s.pop();
		}
		// cout << "a :";
		// REP(i,0,(int)a.size())cout << a[i];
		// cout << endl;
	
		REP(i,0,(int)a.size()-1){
			if(a[i] > a[i+1]){
				flag = 1;
				break;
			}
		}
		if(flag)cout << "no" << endl;
		else cout << "yes" << endl;
	}
	return 0;
}