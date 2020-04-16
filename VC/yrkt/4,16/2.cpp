#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int H,W;
  cin >> H >> W;
  vector<int> dh = {-1,-1,-1,0,0,0,1,1,1};
  vector<int> dw = {-1,0,1,-1,0,1,-1,0,1};
  vector<vector<char>> S(H,vector<char>(W));
  rep(i,H){
    rep(j,W){
      cin >> S.at(i).at(j);
    }
  }
  rep(i,H){
    rep(j,W){
      if(S.at(i).at(j)=='#'){
        cout << '#';
      }else{
        int cnt = 0;
        rep(k,9){
          int nh = i + dh.at(k);
          int nw = j + dw.at(k);
          if(0<=nh&&nh<H&&0<=nw&&nw<W&&S.at(nh).at(nw)=='#'){
            ++cnt;
          }
        }
        cout << cnt;
      }
    }
    cout << endl;
  }
}
