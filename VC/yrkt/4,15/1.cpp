#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,K,sum=0;
  cin >> N >> K;
  vector<int> x(N);
  rep(i,N){
    cin >> x.at(i);
  }
  rep(i,N){
    int a,b;
    a = x.at(i)*2;
    b = abs(K-x.at(i))*2;
    sum += min(a,b);
  }
  cout << sum << endl;
}
