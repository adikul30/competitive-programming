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
	int a[] = {10,20,35,47,52,67,72,85,93,99};
	int mid,end = 9,beg = 0;
	int x = 85,flag = 0;
	while(beg <= end){
		mid = (beg + end) / 2;
		what_is(mid);
		if(x == a[mid]){
			flag = 1;
			cout << "at" << mid + 1 << endl;
			break;
		}
		else if(x < a[mid])end = mid-1;
		else beg = mid+1;
	}
	return 0;
}