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

int getMass(char a){
	int mass = 0;
	if(a == 'C')mass += 12;
	else if(a == 'O')mass += 16;
	else if(a == 'H')mass += 1;
	return mass;
}

int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	string str;
	stack<char> s;
	int k = 0;
	cin >> str;
	int multiplier = 1;
	int mass = 0;
	what_is(str.length());
	while(k < str.length()){
		what_is(k);
		what_is(str[k]);
		multiplier = 1;
		if(str[k] == '('){
			s.push(str[k++]);
			int innerMass = 0, innerMultiplier = 1;
			while(str[k] != ')'){
				printf("inside while\n");
				what_is(str[k]);
				s.push(str[k]);
				k++;
			}
			k++;
			what_is(k);
			if(isdigit(str[k])){	//setting the multiplier after the ()
				// multiplier = atoi (str);
				multiplier = str[k] - '0';
				what_is(multiplier);
			}
			while(!s.empty() && s.top() != '('){
				if(isdigit(s.top())){
					printf("inside if\n");
					what_is(s.top());
					innerMultiplier = s.top() - '0';	//setting the multiplier after the element
					what_is(innerMultiplier);
					s.pop();		//removing the digit
					what_is(s.top());
					innerMass += getMass(s.top()) * innerMultiplier;
					what_is(innerMass);
					s.pop();		//removing the element before the digit
				}
				else {
					printf("inside else\n");
					innerMass += getMass(s.top());
					what_is(innerMass);
					s.pop();
				}
			}
			s.pop();			//removing the (
			// k++;				//increment after the () multiplier
			mass += innerMass * multiplier;
		}
		else mass += getMass(str[k]);
		k++;
		what_is(mass);
	}
	what_is(clock());
	return 0;
}