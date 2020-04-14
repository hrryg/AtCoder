#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,D,X,cnt=0;
  cin >> N >> D >> X;
  vector<int> A(N);
  rep(i,N){
    cin >> A.at(i);
  }
  rep(i,N){
    cnt += (D-1)/A.at(i)+1;
  }
  cout << cnt + X << endl;
}
