#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  ll N,M;
  cin >> N >> M;
  vector<pair<ll,ll>> P(N);
  rep(i,N){
    cin >> P.at(i).first >> P.at(i).second;
  }
  sort(P.begin(),P.end());
  ll cnt=0,m=0;
  while(cnt<M){
    rep(i,N){
      ll t = M - cnt;
      if(t<=P.at(i).second){
        cnt += t;
        m += t * P.at(i).first;
      }else{
        cnt += P.at(i).second;
        m += P.at(i).first * P.at(i).second;
      }
    }
  }
  cout << m << endl;
}
