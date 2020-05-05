#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  vector<int> b(N);
  rep(i,N){
    cin >> a.at(i);
  }
  rep(i,N){
    cin >> b.at(i);
  }
  int p=0;
  rep(i,N){
    int t=0;
    rep(j,N){
      if(i==j){
        t += a.at(j)+b.at(j);
      }else if(i<j){
        t += b.at(j);
      }else{
        t += a.at(j);
      }
    }
    p = max(p,t);
  }
  cout << p << endl;
}
