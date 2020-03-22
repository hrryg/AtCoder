#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  int R,C; //迷路の行数、列数
  int sy,sx; //スタート地点の座標
  int gy,gx; //ゴール地点の座標

  vi dy = {0,1,0,-1}, dx = {1,0,-1,0};
  cin >> R >> C >> sy >> sx >> gy >> gx;
  --sy; --sx; --gy; --gx;
  vector<vector<char>> c(R,vector<char>(C));
  vector<vector<int>> d(R,vector<int>(C));
  rep(i,R){
    rep(j,C){
      cin >> c.at(i).at(j);
    }
  }

  queue<P> q;
  rep(i,R){
    rep(j,C){
      d.at(i).at(j) = INF;
    }
  }
  q.push(P(sy,sx));
  d.at(sy).at(sx) = 0;

  while(q.size()){
    P p = q.front(); q.pop();
    if(p.first==gy&&p.second==gx)
      break;
    rep(i,4){
      int ny = p.first + dy.at(i);
      int nx = p.second + dx.at(i);
      if(0<=ny&&ny<R&&0<=nx&&nx<C&&c.at(ny).at(nx)!='#'&&d.at(ny).at(nx)==INF){
        q.push(P(ny,nx));
        d.at(ny).at(nx) = d.at(p.first).at(p.second) + 1;
      }
    }
  }
  cout << d.at(gy).at(gx) << endl;
}
