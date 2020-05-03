#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,L;
  cin >> N >> L;
  vector<string> S(N);
  rep(i,N){
    cin >> S.at(i);
  }
  sort(S.begin(),S.end());
  rep(i,N){
    cout << S.at(i);
  }
}
