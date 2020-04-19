#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  ll N,M;
  cin >> N >> M;
  vector<ll> A(M);
  rep(i,M){
    cin >> A.at(i);
  }
  rep(i,M){
    N -= A.at(i);
  }
  if(N<0){
    cout << "-1" << endl;
  }else{
    cout << N << endl;
  }
}
