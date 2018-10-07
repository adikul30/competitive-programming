#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x;
	cin >> n;
	string s = "";	
	for(int i = 0;i < n;i++) s += '0';
	map < int , vector < int > > m;
	map < int , int > mk;
	priority_queue < pair < int , int > > pq;
	for(int i = 0;i < n;i++){
		cin >> x;
		mk[x]++;
		m[x].push_back(i);
		// cout << x << ' ' << i << endl;
	}
	for(auto i = mk.begin();i != mk.end();++i){
		pq.push({-i->second, i->first});
	}
	int count1 = 0, count2 = 0;
	while(!pq.empty()){
		int tmp = pq.top().second;
		// cout << tmp << " " << count1 << " " << count2 << endl;
		if(count1 > count2){
			if(mk[tmp] == 1){
				mk[tmp]--;
				s[m[tmp][0]] = 'B';
				// cout << tmp <<  " OI " << m[tmp][0] << endl;
				count2++;
			}
			else if(mk[tmp] == 2){
				mk[tmp] = 0;
				s[m[tmp][0]] = 'A';
				s[m[tmp][1]] = 'B'; 
				count1++;
				count2++;
			}
			else{
				mk[tmp] = 0;
				count2++;
				s[m[tmp][0]] = 'B';
				for(int j = 1;j < m[tmp].size();j++){
					s[m[tmp][j]] = 'A';
				}
			}
		}
		else{
			if(mk[tmp] == 1){
				mk[tmp]--;
				s[m[tmp][0]] = 'A';
				// cout << m[x][0] << endl;
				count1++;
			}
			else if(mk[tmp] == 2){
				mk[tmp] = 0;
				s[m[tmp][0]] = 'A';
				s[m[tmp][1]] = 'B'; 
				count1++;
				count2++;
			}
			else if(count1 == count2){
				for(int j = 0;j < m[tmp].size();j++){
					s[m[tmp][j]] = 'A';
				}
			}
			else{
				mk[tmp] = 0;
				count2++;
				s[m[tmp][0]] = 'A';
				for(int j = 1;j < m[tmp].size();j++){
					s[m[tmp][j]] = 'B';
				}
			}
		}
		pq.pop();
	}
	if(count1 == count2){
		cout << "YES\n" << s << endl;
	}
	else cout << "NO\n";
}