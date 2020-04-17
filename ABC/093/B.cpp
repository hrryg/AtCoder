#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int A,B,K;
  cin >> A >> B >> K;
  for(int i=A;i<=min(B,A+K-1);++i){
    cout << i << endl;
  }
  for(int i=max(B-K+1,A+K);i<=B;++i){
    cout << i << endl;
  }
}
