#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i,N){
    cin >> a.at(i);
    --a.at(i);
  }
  int cnt=0;
  rep(i,N){
    if(a.at(a.at(i))==i){
      ++cnt;
    }
  }
  cout << cnt/2 << endl;
}
