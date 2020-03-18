#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9+7;
typedef pair<int,int> P;
int main(){
  int N,M;
  int sx,sy;
  int gx,gy;
  cin >> N >> M;
  vector<vector<char>> maze(N,vector<char>(M));
  vector<vector<int>> d(N,vector<int>(M));
  vector<int> dx = {1,0,-1,0};
  vector<int> dy = {0,1,0,-1};

  queue<P> que;
  for(int i=0;i<N;++i){
    for(int j=0;j<M;++j){
      cin >> maze.at(i).at(j);
      if(maze.at(i).at(j)=='S'){
        sx = i;
        sy = j;
      }else if(maze.at(i).at(j)=='G'){
        gx = i;
        gy = j;
      }
      d.at(i).at(j)=INF;
    }
  }
  que.push(P(sx,sy));
  d.at(sx).at(sy) = 0;

  while(que.size()){
    P p = que.front(); que.pop();
    if(p.first==gx&&p.second==gy)
      break;
    for(int i=0;i<4;++i){
      int nx = p.first + dx.at(i);
      int ny = p.second + dy.at(i);
      if(0<=nx&&nx<N&&0<=ny&&ny<M&&maze.at(nx).at(ny)!='#'&&d.at(nx).at(ny)){
        que.push(P(nx,ny));
        d.at(nx).at(ny) = d.at(p.first).at(p.second) + 1;
      }
    }
  }
  cout << d.at(gx).at(gy);
}
