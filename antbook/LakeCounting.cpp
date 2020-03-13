#include <bits/stdc++.h>
using namespace std;
int N,M,cnt=0;
vector<vector<char>> Lake;
void dfs(int w, int h){
  Lake.at(w).at(h) = '.';
  for(int dw=-1;dw<2;++dw){
    for(int dh=-1;dh<2;++dh){
      int nw = w + dw;
      int nh = h + dh;
      if(0 <= nw && nw < N && 0 <= nh && nh < M && Lake.at(nw).at(nh)=='w')
        dfs(nw,nh);
    }
  }
}
int main(){
  cin >> N >> M;
  Lake.assign(N,vector<char>(M));
  for(int i=0;i<N;++i){
    for(int j=0;j<M;++j){
      cin >> Lake.at(i).at(j);
    }
  }
  for(int i=0;i<N;++i){
    for(int j=0;j<M;++j){
      if(Lake.at(i).at(j)=='w'){
        dfs(i,j);
        cnt++;
      }
    }
  }
  cout << cnt;
}
