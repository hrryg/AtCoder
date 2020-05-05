#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i,N){
    cin >> a.at(i);
  }
  int cnt;
  rep(i,N){
    int t = a.at(i);
    while(t%2==0){
      t /= 2;
      ++cnt;
    }
  }
  cout << cnt << endl;
}
