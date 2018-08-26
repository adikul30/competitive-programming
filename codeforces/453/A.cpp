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
	int n,m;
	cin >> n >> m;
	int a[n+10],b[n+10];
	REP(i,0,n)cin >> a[i] >> b[i];
	if(a[0]==0 && b[0] >= m)
		printf("YES\n");
	else{
		if(a[0] > 0)printf("NO\n");
		else{
			int min = a[0],max = b[0];
			int flag = 0;
			REP(i,1,n){
				if(a[i] > max){
					printf("NO\n");
					flag = 1;
					break;
				}
				if(b[i]>max)
					max = b[i];
				if(max >= m){
					printf("YES\n");
					flag = 1;
					break;
				}
			}
			if(!flag)printf("NO\n");
		}
	}
	return 0;
} 