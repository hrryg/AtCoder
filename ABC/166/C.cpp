#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;

int main(){
  ll N,M;
  cin >> N >> M;
  vector<ll> H(N);
  set<int> s;
  vector<vector<int>> L(N);
  rep(i,N){
    cin >> H.at(i);
  }
  rep(i,M){
    int x,y;
    cin >> x >> y;
    s.insert(x-1); s.insert(y-1);
    L.at(x-1).push_back(y-1);
    L.at(y-1).push_back(x-1);
  }
  ll cnt=0;
  rep(i,N){
    bool b = 1;
    if(!(s.count(i))){
      ++cnt;
      continue;
    }
    rep(j,L.at(i).size()){
      if(H.at(i)<=H.at(L.at(i).at(j))){
        b=0;
        break;
      }
    }
    if(b){
      ++cnt;
    }
  }
  cout << cnt << endl;
}
