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
typedef vector<ll> vi;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;

int getPriority(char c){
    //+, -, *, /, ^
    int priority = 0;
    if(c == '^')priority = 5;
    else if(c == '/')priority = 4;
    else if(c == '*')priority = 3;
    else if(c == '-')priority = 2;
    else if(c == '+')priority = 1;
    // what_is(c);
    // what_is(priority);
    return priority;
}
 
int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
        string str;
        cin >> str;
        stack<char> s;

        REP(i,0,str.length()){
            if(str[i] == '(')s.push(str[i]);
            else if(isalpha(str[i]))cout << str[i];
            else if(str[i] == ')'){
                while((!s.empty()) && s.top() != '('){
                    cout << s.top();
                    s.pop();
                }
                s.pop();
            }
            else {
                if(getPriority(s.top()) < getPriority(str[i]))s.push(str[i]);
                else {
                    while(getPriority(str[i]) <= getPriority(s.top())){
                        cout << s.top();
                        s.pop();
                    }
                    s.push(str[i]);
                }
            }

        }
        cout << endl;
	}
	
	return 0;
} 