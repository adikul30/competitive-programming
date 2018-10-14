#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    char id;
    cin>>t;
    while (t--){
        cin>>id;
        switch(id){
            case 'B':
            case 'b':
                cout<<"BattleShip"<<endl;
                break;
            case 'C':
            case 'c':
                cout<<"Cruiser"<<endl;
                break;
            case 'D':
            case 'd':
                cout<<"Destroyer"<<endl;
                break;
            case 'F':
            case 'f':
                cout<<"Frigate"<<endl;
                break;
            default:
                cout<<"Wrongship"<<endl;
        }
    }
	return 0;
}
