#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  int H,W,N;
  int sh,sw;
  int gh,gw;
  vi dh = {0,1,0,-1}, dw = {1,0,-1,0};
  cin >> H >> W >> N;
  vector<vector<char>> town(H,vector<char>(W));
  vector<vector<int>> d(H,vector<int>(W));
  rep(i,H){
    rep(j,W){
      cin >> town.at(i).at(j);
      d.at(i).at(j) = INF;
      if(town.at(i).at(j)=='S'){
        sh = i; sw = j;
        d.at(sh).at(sw) = 0;
      }else if(town.at(i).at(j)==(char)(N+'0')){
        gh = i; gw = j;
      }
    }
  }
  queue<P> q;
  q.push(P(sh,sw));
  int hp = 1;

  while(q.size()){
    P p = q.front(); q.pop();
    if(p.first==gh&&p.second==gw&&town.at(p.first).at(p.second)==(char)(hp+'0')){
      break;
    }
    rep(i,4){
      int nh = p.first + dh.at(i);
      int nw = p.second + dw.at(i);
      if(0<=nh&&nh<H&&0<=nw&&nw<W&&town.at(nh).at(nw)!='X'&&d.at(nh).at(nw)==INF){
        d.at(nh).at(nw) = d.at(p.first).at(p.second) + 1;
        if(town.at(nh).at(nw)==(char)(hp+'0')){
          ++hp;
          while(!q.empty()){
            q.pop();
          }
          rep(k,H){
            rep(l,W){
              if(!(k==nh&&l==nw)){
                d.at(k).at(l) = INF;
              }
            }
          }
          q.push(P(nh,nw));
          break;
        }else{
          q.push(P(nh,nw));
        }
      }
    }
  }
  cout << d.at(gh).at(gw) << endl;
}
