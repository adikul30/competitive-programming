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
	int t,a_count,b_count;
	cin >> t;
	while(t--){
		int flag1=0,flag2=0,pos1=0,pos2=0;
		a_count=0;
		b_count=0;
		char input[100010];
		cin >> input;
		int l = strlen(input);
		REP(i,0,l){
			flag1=0;
			flag2=0;
			if(input[i]=='A'){
				a_count++;
				// printf("a_count :%d\n", a_count);
			}
			else if(input[i]=='B'){
				b_count++;
				// printf("b_count :%d\n", b_count);
			}
			else{
				int j=i;
				while(j>=0){			//flag1 is 1 for A , 2 for B
					if(input[j]=='A'){
						pos1 = j;
						// printf("pos1 : %d\n", pos1);
						flag1=1;break;
					}
					else if(input[j]=='B'){
						pos1 = j;
						// printf("pos1 : %d\n", pos1);
						flag1=2;break;
					}
					j--;
				}
				j=i;
				while(j<l){				//flag2 is 1 for A , 2 for B
					if(input[j]=='A'){
						pos2 = j;
						// printf("pos2 : %d\n", pos2);
						flag2=1;break;
					}
					else if(input[j]=='B'){
						pos2 = j;
						// printf("pos2 : %d\n", pos2);
						flag2=2;break;
					}
					j++;
				}
				if(flag1==1&&flag2==1){
					// printf("i :%d\n",i);
					a_count += pos2 - pos1-1;
					i = pos2-1;
					// printf("a_count :%d\n", a_count);
				}
				else if(flag1==2&&flag2==2){
					// printf("i :%d\n",i);
					b_count += pos2 - pos1-1;
					i = pos2-1;
					// printf("b_count :%d\n", b_count);
				}
				
			}
		}

		printf("%d %d",a_count,b_count);
		printf("\n");

	}
	return 0;
}