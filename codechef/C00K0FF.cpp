#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for(int i = a; i < b; ++i)


int main()
{	
	int t,n,i;

	cin >> t;
	while(t--){
		scanf("%d\n",&n);
		string input;
		int count[5];
		REP(i,0,5)count[i] = 0;
		REP(i,0,n){
			getline(cin, input);
			// cout << input << endl;
			if (input == "cakewalk")count[0] += 1;
			else if (input == "simple")count[1] += 1;
			else if (input == "easy")count[2] += 1;
			else if (input == "easy-medium")count[3] += 1;
			else if (input == "medium")count[3] += 1;
			else if (input == "medium-hard")count[4] += 1;
			else if (input == "hard")count[4] += 1;
		}

		// if (count[0] == 1 && count[1] == 1 && count[2] == 1){
		// 	if (count[3] >= 1 || count[4] >= 1){
		// 		if (count[5] >= 1 || count [6] >= 1){
		// 			printf("Yes\n");
		// 		}
		// 		else printf("No\n");
		// 	}
		// 	else printf("No\n");
		// }
		// else printf("No\n");
		int flag = 1;
		REP(i,0,5){
			if(count[i]==0){
				flag = 0;
				break;
			}
		}
		printf("%s\n", flag?"Yes":"No");
	}	
	return 0;
}