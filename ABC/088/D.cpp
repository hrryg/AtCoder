#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  int H,W,cnt=-1;
  cin >> H >> W;
  vector<vector<char>> s(H,vector<char>(W));
  vector<vector<int>> b(H,vector<int>(W));
  vi dh = {0,1,-1,0}, dw = {1,0,0,-1};
  rep(i,H){
    rep(j,W){
      cin >> s.at(i).at(j);
      b.at(i).at(j) = INF;
      if(s.at(i).at(j)=='.')
        ++cnt;
    }
  }
  queue<P> q;
  b.at(0).at(0) = 0;
  q.push(P(0,0));
  while(q.size()){
    P p = q.front(); q.pop();
    if(p.first==H-1&&p.second==W-1)
      break;
    rep(i,4){
      int nh = p.first + dh.at(i);
      int nw = p.second + dw.at(i);
      if(0<=nh&&nh<H&&0<=nw&&nw<W&&s.at(nh).at(nw)!='#'&&b.at(nh).at(nw)==INF){
        q.push(P(nh,nw));
        b.at(nh).at(nw) = b.at(p.first).at(p.second) + 1;
      }
    }
  }
  if(cnt-b.at(H-1).at(W-1)<0)
    cout << "-1" << endl;
  else
    cout << cnt - b.at(H-1).at(W-1) << endl;
}
