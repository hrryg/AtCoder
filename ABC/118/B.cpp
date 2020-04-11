#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M,t;
  cin >> N >> M >> t;
  map<int, int>  a;
  for(int i=0;i<t;++i){
    int x;
    cin >> x;
    a[x] = 1;
  }
  for(int i=0;i<N-1;++i){
    int x;
    cin >> x;
    for(int j=0;j<x;++j){
      int y;
      cin >> y;
      if(a.count(y)){
        ++a[y];
      }
    }
  }
  int cnt = 0;
  for(auto p : a){
    auto v = p.second;
    if(v==N){
      ++cnt;
    }
  }
  cout << cnt << endl;
}
