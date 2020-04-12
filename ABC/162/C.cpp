#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1;i<=n;++i)
typedef long long int ll;

int main(){
  ll K,sum=0;
  cin >>K;
  rep(i,K){
    rep(j,K){
      rep(k,K){
        int t = gcd(i,gcd(j,k));
        sum += t;
      }
    }
  }
  cout << sum << endl;
}
