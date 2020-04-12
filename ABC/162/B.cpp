#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  ll N,sum=0;
  cin >> N;
  if(N<15){
    for(int i=1;i<=N;++i){
      if(i%3&&i%5&&i%15){
        sum += i;
      }
    }
  }else{
    ll x = N/15;
    ll y = N%15;
    rep(i,x){
      sum += 60 + 120 * i;
    }
    for(int i=N-y;i<=N;++i){
      if(i%3&&i%5&&i%15){
        sum += i;
      }
    }
  }
  cout << sum << endl;
}
