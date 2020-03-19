#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int H,W;
bool b = false;
vector<vector<char>> c;
int dh[4] = {1,0,-1,0}, dw[4] = {0,1,0,-1};
void dfs(int x,int y){

  rep(i,4){
    int nh = x + dh[i];
    int nw = y + dw[i];
    if(0<=nh&&nh<H&&0<=nw&&nw<W){
      if(c.at(nh).at(nw)=='.'){
        c.at(x).at(y) = '#';
        dfs(nh,nw);
      }
      else if(c.at(nh).at(nw)=='g')
        b = true;
    }
  }
}
int main(){
  cin >> H >> W;
  c.assign(H,vector<char>(W));
  rep(i,H)
    rep(j,W)
      cin >> c.at(i).at(j);
  rep(i,H)
    rep(j,W)
      if(c.at(i).at(j)=='s')
        dfs(i,j);
  if(b)
    cout << "Yes";
  else
    cout << "No";
}
