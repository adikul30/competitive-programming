/*
 *	adikul30
 *	Aditya Kulkarni <aditya.kulkarni15@siesgst.ac.in>
 */
#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for(int i = a; i < b; ++i)

int main()
{
	int t;
	cin >> t;
    REP(i,1,t+1){
        string str;
        cin >> str;
        int len = str.length();
        int pc = 0,nc = 0;
        REP(j,0,str.length()){
            if(str[j] == '+')pc++;
            else nc++;
        }
        if(pc == len)cout << "Case #" << i << ": " << "0" << endl;
        else if(nc == len)cout << "Case #" << i << ": " << "1" << endl;
        else{
            char c,notc;
            int count = 0;
            if(str[0] == '+'){c = '+';notc = '-';}
            else {c = '-';notc = '+';}
            int pos = 0;
            if(str[len - 1] == '+')len -= 1;
            while(pos < len){
            	pos = 0;
                while(str[pos] == c){
                    str[pos] = notc;
                    pos++;
                }
                c = str[pos];
                if(c == '+')notc = '-';
                else notc = '+';
                count++;
            }
            cout << "Case #" << i << ": " << count << endl;
        }
    }
	return 0;
}