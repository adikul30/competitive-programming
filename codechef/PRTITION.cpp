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

bool isSubsetSum(vi set, int n, int sum)
{
    // The value of subset[i][j] will be true if there is a 
    // subset of set[0..j-1] with sum equal to i
    bool subset[n+1][sum+1];
  
    // If sum is 0, then answer is true
    for (int i = 0; i <= n; i++)
      	subset[i][0] = true;
  
    // If sum is not 0 and set is empty, then answer is false
    for (int i = 1; i <= sum; i++)
    	subset[0][i] = false;
  
     // Fill the subset table in botton up manner
    for (int i = 1; i <= n; i++){
    	for (int j = 1; j <= sum; j++){
        	if(j < set[i-1])
         		subset[i][j] = subset[i-1][j];
         	if (j >= set[i-1])
           		subset[i][j] = subset[i-1][j] || subset[i - 1][j-set[i-1]];
        }
    }
  
        // uncomment this code to print table
    for (int i = 0; i <= n; i++){
    	for (int j = 0; j <= sum; j++)
        	printf ("%4d", subset[i][j]);
    	printf("\n");
    }
  
     return subset[n][sum];
}

int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> x >> n;
		vi v;
		ll sum = 0;
		REP(i,0,n){
			v.pb(i+1);
			sum += i+1;
		}
		// REP(i,0,n)cout << i << ":" << a[i] << endl;
		sum -= x;
		what_is(sum);
		v.erase(std::remove(v.begin(), v.end(), x), v.end()); 
		REP(i,0,n-1)cout << i << ":" << v[i] << endl;

		if(sum % 2 != 0)printf("impossible\n");
		else{
			if (isSubsetSum(v, n-1, sum/2) == true){

				printf("Possible\n");
			}
  			else
     			printf("impossible\n");
		}
	}
	
	return 0;
}