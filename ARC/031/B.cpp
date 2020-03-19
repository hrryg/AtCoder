#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
vector<vector<char>> A(10,vector<char>(10));
vector<vector<char>> check(10,vector<char>(10));
vector<int> dn = {1,0,-1,0};
vector<int> dm = {0,1,0,-1};
bool b = false;
int cnt1 = 0;

void dfs(int x,int y){
  check.at(x).at(y) = 'o';
  rep(i,4){
    int nn = x + dn.at(i);
    int nm = y + dm.at(i);
    if(0<=nn&&nn<10&&0<=nm&&nm<10&&check.at(nn).at(nm)!='o'&&A.at(nn).at(nm)=='o'){
      dfs(nn,nm);
      ++cnt1;
    }
  }
}

int main(){
  int cnt = 0;
  rep(i,10)
    rep(j,10){
      cin >> A.at(i).at(j);
      if(A.at(i).at(j)=='o')
        ++cnt;
    }
  rep(i,10){
    rep(j,10){
      if(A.at(i).at(j)=='x'){
        dfs(i,j);
        cout << cnt1 << endl;
        rep(k,10){
          rep(l,10){
            check.at(k).at(l) = 'x';
          }
        }
      }
      if(cnt==cnt1){
          b = true;
          break;
      }
      cnt1 = 0;
    }
    if(b)
      break;
  }
  if(b)
    cout << "YES";
  else
    cout << "NO";
}
