#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,M;
  cin >> N >> M;
  vector<pair<int,int>> s(N);
  vector<pair<int,int>> cp(M);
  rep(i,N){
    cin >> s.at(i).first >> s.at(i).second;
  }
  rep(i,M){
    cin >> cp.at(i).first >> cp.at(i).second;
  }
  int num;
  rep(i,N){
    int x1 = s.at(i).first, y1 = s.at(i).second;
    int dis = 1e9+7;
    rep(j,M){
      int x2 = cp.at(j).first, y2 = cp.at(j).second;
      if(dis>abs(x1-x2)+abs(y1-y2)){
        num = j+1;
        dis = abs(x1-x2)+abs(y1-y2);
      }
    }
    cout << num << endl;
  }
}
