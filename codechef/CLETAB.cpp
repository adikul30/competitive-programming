
/*
 *	adikul30
 *	Aditya Kulkarni <aditya.kulkarni15@siesgst.ac.in>
 */
#include <bits/stdc++.h>
 
using namespace std;
 
#define INF 1e9
#define EPS 1e-9
#define REP(i, a, b) for(ll i = a; i < b; ++i)
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
        int n,m,count = 0;
        cin >> n >> m;
        int a[m];
        vi v;
        multiset<int> s;
        REP(i,0,m){
            cin >> a[i];
            s.insert(a[i]);
        }
        vi::iterator it;
        v.clear();
        // cout << "set is : ";
        // for(auto x : s)cout << x;
        // cout << endl;
        REP(i,0,m){
        	// what_is(a[i]);
            if(n != 0){		//tables not filled yet
                it = find(v.begin(), v.end(),a[i]);
                if(it == v.end() || i == 0){		//table not already occupied
                    v.pb(a[i]);
                    count++;
                    n--;
                    if(!s.empty())s.erase(s.find(a[i]));
                }
                else if(!s.empty())s.erase(s.find(a[i]));
            }
            else if(n == 0){		//tables are full now
                it = find(v.begin(), v.end(),a[i]);
                if(!v.empty() && it != v.end()){		//person already sitting on table, no need to clean
                    if(!s.empty())s.erase(s.find(a[i]));
                }
                else{		//need to remove person based on future orders
                    count++;
                    // what_is(a[i]);
                    int pos = 0,flag = 0,farthest = 0,order = v[0];
                    REP(j,0,v.size()){
                    	if(s.find(v[j]) == s.end()){
                    		//element is not going to be needed in future
                    		// what_is(j);
                    		pos = j;
                    		flag = 1;
                    		break;
                    	}
                    	else {
                    		int temp = j;
                    		// farthest = max(farthest,temp);
                    		//optimal page replacement
                    	}
                    }
                    if(flag == 1){
            			// cout << "vector is : ";
               //      	for(auto x : v)cout << x;
               //      	cout << endl;
        				if(!s.empty())s.erase(s.find(a[i]));
                    	if(!v.empty())v.erase(v.begin() + pos);
                    	v.pb(a[i]);
            			// cout << "vector is : ";
                    	// for(auto x : v)cout << x;
                    	// cout << endl;
                    }
                    else{
           				if(!s.empty())s.erase(s.find(a[i]));
                    	if(!v.empty())v.erase(v.begin() + farthest);
                    	v.pb(a[i]);
                    }

                }
            }
            // what_is(count);
            // cout << "set is : ";
            // for(auto x : s)cout << x;
            // cout << endl;
        }
        cout << count << endl; 
    }
   
	return 0;
} 