#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  ll X,ans;
  cin >> X;
  for(int i=2;i<=100;++i){
    ll t = X;
    ll r = 0;
    ll cnt = 0;
    while(t>1){
      if(t%2){
        ++r;
      }
      t/=2;
      ++cnt;
    }
    if(cnt==5){
      if(r==1){
        ans = -1;
      }
    }
  }

  
}
