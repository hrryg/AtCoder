#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
const int INF = 1e13+7;

int main(){
  ll N,M,X;
  cin >> N >> M >> X;
  vector<ll> C(N);
  vector<vector<ll>> A(N,vector<ll>(M));
  rep(i,N){
    cin >> C.at(i);
    rep(j,M){
      cin >> A.at(i).at(j);
    }
  }
  ll ans = INF;
  rep(mask,1<<N){
    ll num = 0;
    vector<ll> y(M);
    rep(i,N){
      if(mask & (1<<i)){
        num += C.at(i);
        rep(j,M){
          y.at(j) += A.at(i).at(j);
        }
      }
    }
    bool b = 1;
    rep(i,M){
      if(y.at(i)<X){
        b=0; break;
      }
    }
    if(b){
      ans = min(ans,num);
    }
  }
  if(ans==INF){
    cout << "-1" << endl;
  }else{
    cout << ans << endl;
  }
}
