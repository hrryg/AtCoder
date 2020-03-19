#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int N,M,cnt=0;
const int MAX_N = 100;
vector<bool> check(MAX_N,0);
vector<vector<int>> v;

bool dfs(int x,int q){
  bool b = 1;
  check.at(x) = 1;
  for(int y : v.at(x)){
    if(y!=q && (check.at(y)||!dfs(y,x)))
      b = 0;
  }
  return b;
}

int main(){
  cin >> N >> M;
  v.resize(N);
  rep(i,M){
    int x,y;
    cin >> x >> y;
    v.at(x-1).push_back(y-1);
    v.at(y-1).push_back(x-1);
  }
  rep(i,N){
    if(!check.at(i))
      cnt += dfs(i,-1);
  }
  cout << cnt << endl;
}
