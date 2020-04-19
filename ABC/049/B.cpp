#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int H,W;
  cin >> H >> W;
  vector<vector<char>> C(H,vector<char>(W));
  rep(i,H){
    rep(j,W){
      cin >> C.at(i).at(j);
    }
  }
  rep(i,H){
    rep(k,2){
      rep(j,W){
        cout << C.at(i).at(j);
      }
      cout << endl;
    }
  }
}
