#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,copy,num=2,temp=0;
    cin>>n;
  if(n==0){
      cout<<1<<endl;
       continue;
  }
  copy=n;
  vector<int>a;
  for(int i=0;n>0;i++){
      a.push_back(n%10);
      n=n/10;
      
  }
  n=copy;
  while(num<n){
     for(int i=0; i<a.size(); i++){
          temp=(a[i]*num)+temp;
          a[i]=temp%10;
          temp=temp/10;
          
      }
      while(temp!=0){
          a.push_back(temp%10);
          temp/=10;
      }
      num++;
  }
  
  n=copy;
  for(int i=a.size()-1;i>=0;i--){
      cout<<a[i];
  }
  cout<<endl;
   }
   return 0;
} 
