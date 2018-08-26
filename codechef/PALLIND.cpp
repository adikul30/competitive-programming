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
#define STONE -2
#define GLASS -1
#define QUARTZ 0
#define RUBY 1
#define DIAMOND 2

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;

// C function for extended Euclidean Algorithm
long long gcdExtended(long long a, long long b, long long *x, long long *y);

// Function to find modulo inverse of b. It returns
// -1 when inverse doesn't
long long modInverse(long long b, long long m)
{
	long long x, y; // used in extended GCD algorithm
	long long g = gcdExtended(b, m, &x, &y);

	// Return -1 if b and m are not co-prime
	if (g != 1)
		return -1;

	// m is added to handle negative x
	return (x%m + m) % m;
}

// Function to compute a/b under modlo m
void modDivide(long long a, long long b, long long m)
{
	a = a % m;
	long long inv = modInverse(b, m);
	if (inv == -1)
	cout << "Division not defined";
	else
	cout << (inv * a) % m << endl;
}

// C function for extended Euclidean Algorithm (used to
// find modular inverse.
long long gcdExtended(long long a, long long b, long long *x, long long *y)
{
	// Base Case
	if (a == 0)
	{
		*x = 0, *y = 1;
		return b;
	}

	long long x1, y1; // To store results of recursive call
	long long gcd = gcdExtended(b%a, a, &x1, &y1);

	// Update x and y using results of recursive
	// call
	*x = y1 - (b/a) * x1;
	*y = x1;

	return gcd;
}

boolean isPalindrome(){
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;

	}
	return 0;
}