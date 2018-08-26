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
typedef vector<ll> vi;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;

int isMultipleOf3(int n)
{
	int odd_count = 0;
	int even_count = 0;

	if(n < 0) n = -n;
	if(n == 0) return 1;
	if(n == 1) return 0;
	while(n){
		if(n & 1) 
		    odd_count++;
		n = n>>1;
		if(n & 1)
			even_count++;
		n = n>>1;
	}
	return isMultipleOf3(abs(odd_count - even_count));
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		ll d0,d1,digit;
		ll k;
		cin >> k >> d0 >> d1;
		ll sum = d0 + d1;
		REP(i,2,k){
			digit = sum % 10;
			sum += digit;
		}
		what_is(sum);
		if (isMultipleOf3(sum))cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}