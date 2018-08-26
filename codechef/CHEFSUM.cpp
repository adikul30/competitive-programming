#include <bits/stdc++.h>

using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define PB push_back
#define MP make_pair
#define MAX 100

typedef long long ll;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

const float PI = 3.1415926535897932384626433832795;
const int MOD = 1000000007;

int main()
{
	int t, n ,pos,total,temp,temp2,i,j,k;
	
	scanf("%d",&t);
	
	for(i=1;i<=t;i++){
		
		scanf("%d",&n);
		
		temp =0 ;
		total =0 ;
		int prefix[n], suffix[n], arr[n];
		long long int total[n],minSum;
		for(j=1; j<=n;j++){
			
			scanf("%d",&arr[j]);
			temp += arr[j];
			prefix[j] = temp;
		}
		
		for(j=1; j<=n;j++){
			
			temp2=0;
			int l = n-j+1;
			for(k=n;k>n-l;k--)	temp2+=arr[k];

			suffix[j] = temp2;
			total[j] = prefix[j]+suffix[j];
			

		}
		minSum = total[1];
		pos = 1;
		for (j = 1; j <= n; j++){
			if(total[j] < minSum){
				minSum = total[j] ;
				pos = j ;
			}
		}
		printf("%d\n",pos);
	}
	return 0;
}
