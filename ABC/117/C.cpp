#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,M,cnt=0;
  cin >> N >> M;
  vector<int> X(M);
  rep(i,M)
    cin >> X.at(i);
  sort(X.begin(),X.end());

  if(M<=N){
    cout << cnt << endl;
  }else if(N==1){
    cout << X.at(M-1)-X.at(0) << endl;
  }else{
    vector<int> v(M-1);
    rep(i,M-1){
      v.at(i) = X.at(i+1)-X.at(i);
    }
    sort(v.begin(),v.end());
    rep(i,M-N)
      cnt += v.at(i);
    cout << cnt << endl;
  }
}
