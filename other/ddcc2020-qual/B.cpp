#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  ll N,S=0;
  cin >> N;
  vector<ll> A(N);
  rep(i,N){
    cin >> A.at(i);
    S += A.at(i);
  }
  ll m = S,sum = 0;
  rep(i,N){
    sum += A.at(i);
    m = min(m, abs(sum-(S-sum)));
  }
  cout << m << endl;
}
