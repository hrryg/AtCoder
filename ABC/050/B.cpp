#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,M;
  cin >> N;
  vector<int> T(N);
  rep(i,N){
    cin >> T.at(i);
  }
  cin >> M;
  vector<pair<int,int>> P(M);
  rep(i,M){
    cin >> P.at(i).first >> P.at(i).second;
  }
  rep(i,M){
    int t = 0;
    rep(j,N){
      if(P.at(i).first==j+1){
        t += P.at(i).second;
      }else{
        t += T.at(j);
      }
    }
    cout << t << endl;
  }
}
