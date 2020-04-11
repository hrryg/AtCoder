#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,K,num=1e9+7;
  cin >> N >> K;
  vector<int> h(N);
  rep(i,N){
    cin >> h.at(i);
  }
  sort(h.begin(),h.end());
  rep(i,N-K+1){
    num = min(num,h.at(i+K-1)-h.at(i));
  }
  cout << num << endl;
}
