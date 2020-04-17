#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,A;
  double T,P,F=1e9+7;
  cin >> N >> T >> A;
  vector<double> H(N);
  rep(i,N){
    cin >> H.at(i);
  }
  rep(i,N){
    double num = T - H.at(i)*0.006;
    if(abs(A-num)<F){
      F = abs(A-num);
      P = i+1;
    }
  }
  cout << P << endl;
}
