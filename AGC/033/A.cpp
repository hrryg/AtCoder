#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
const int INF = 1e9+7;

int main(){
  int H,W;
  cin >> H >> W;
  vi dh = {0,1,0,-1}, dw = {1,0,-1,0};
  vector<vector<char>> A(H,vector<char>(W));
  vector<vector<int>> B(H,vector<int>(W));
  rep(i,H){
    rep(j,W){
      cin >> A.at(i).at(j);
    }
  }
  queue<P> q;
  rep(i,H){
    rep(j,W){
      B.at(i).at(j) = INF;
      if(A.at(i).at(j)=='#'){
        q.push(P(i,j));
        B.at(i).at(j) = 0;
      }
    }
  }
  int m = 0;
  while(q.size()){
    P p = q.front(); q.pop();
    rep(k,4){
      int nh = p.first + dh.at(k);
      int nw = p.second + dw.at(k);
      if(0<=nh&&nh<H&&0<=nw&&nw<W&&A.at(nh).at(nw)=='.'&&B.at(nh).at(nw)==INF){
        A.at(nh).at(nw) = '#';
        B.at(nh).at(nw) = min(B.at(nh).at(nw), (B.at(p.first).at(p.second) + 1));
        q.push(P(nh,nw));
        m = max(m,B.at(nh).at(nw));
      }
    }
  }
  cout << m << endl;
}
