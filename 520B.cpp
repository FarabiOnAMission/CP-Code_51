#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n>>m;
  ll c=0;
  while(n!=m){
    if(n<m){
      n*=2;
      c++;
    }
    else{
      c+=(n-m);
      n-=m;
    }
  }

  cout<<c<<endl;

}