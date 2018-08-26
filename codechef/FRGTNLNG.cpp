#include <bits/stdc++.h>

using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define PB push_back
#define MP make_pair

typedef long long ll;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

const float PI = 3.1415926535897932384626433832795;
const int MOD = 1000000007;

int main()
{	
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		VS d,phrases;
		string temp;
		d.clear();
		phrases.clear();
		REP(i,0,n){
			cin >> temp;
			d.PB(temp);
		}
		// for (int i = 0; i < d.size(); i++){
		// 	cout << d[i] << endl;
		// }
		REP(i,0,k){
			int l;
			cin >> l;
			getline(cin, temp);
			phrases.PB(temp);
		}
		string p;
		for (int i = 0; i < phrases.size(); i++){
			p+=phrases[i];
		}
		REP(i,0,n){
			if(p.find(d[i]) != string::npos){
				printf("YES ");
			}
			else printf("NO ");
		}
		printf("\n");
	}
	return 0;
}