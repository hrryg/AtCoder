#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int H,W;
  cin >> H >> W;
  vector<vector<char>> a(H,vector<char>(W));
  rep(i,H){
    rep(j,W){
      cin >> a.at(i).at(j);
    }
  }
  rep(i,W+2){
    cout << '#';
  }
  cout << endl;
  rep(i,H){
    cout << '#';
    rep(j,W){
      cout << a.at(i).at(j);
    }
    cout << '#' << endl;
  }
  rep(i,W+2){
    cout << '#';
  }
}
