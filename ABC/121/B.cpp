#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,M,C,cnt=0;
  cin >> N >> M >> C;
  vector<int> B(M);
  vector<vector<int>> A(N,vector<int>(M));
  rep(i,M)
    cin >> B.at(i);
  rep(i,N)
    rep(j,M)
      cin >> A.at(i).at(j);
  rep(i,N){
    int num = 0;
    rep(j,M){
      num += A.at(i).at(j) * B.at(j);
    }
    if(num+C > 0)
      ++cnt;
  }
  cout << cnt;
}
