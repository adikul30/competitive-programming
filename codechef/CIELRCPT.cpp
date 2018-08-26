/*
 *	adikul30
 *	Aditya Kulkarni <aditya.kulkarni15@siesgst.ac.in>
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int p;
		cin >> p;
		int k = 12,count = 0;
		while(p != 0){
			count += p / (int)pow(2,k-1);
			p = p % (int)pow(2,k-1);
			k--;
		}
		cout << count << endl;
	}
	return 0;
}