#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;
int H,W,ans=0,num=0,cnt=0;
const int MAX_H = 20;
const int MAX_W = 20;
vector<vector<char>> S;
vector<vector<bool>> b(MAX_H,vector<bool>(MAX_W));
vector<int> dx = {-1,0,1};
vector<int> dy = {-1,0,1};

int dfs(int x,int y){
  b.at(x).at(y) = 1;
  rep(i,3){
    rep(j,3){
      int nx = x + dx.at(i);
      int ny = y + dy.at(j);
      if(0<=nx&&nx<H&&0<=ny&&ny<W&&!b.at(nx).at(ny)&&S.at(nx).at(ny)=='.'){
        dfs(nx,ny);
        ++cnt;
        num = max(num,cnt);
      }
    }
  }
  return cnt;
}

int main(){
  cin >> H >> W;
  S.assign(H,vector<char>(W));
  rep(i,H)
    rep(j,W)
      cin >> S.at(i).at(j);
  rep(i,H){
    rep(j,W){
      if(S.at(i).at(j)=='.'){
        ans = max(dfs(i,j),ans);
        cnt = 0;
        rep(k,MAX_H)
          rep(l,MAX_W)
            b.at(k).at(l) = 0;
      }
    }
  }
  cout << ans;
}
