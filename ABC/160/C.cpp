#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int K,N;
  cin >> K >> N;
  vector<int> A(N);
  rep(i,N)
    cin >> A.at(i);

  int m=0;
  rep(i,N){
    if(i==N-1){
      m = max(m,abs((K-A.at(i))+A.at(0)));
    }else{
      m = max(m,abs(A.at(i)-A.at(i+1)));
    }
  }
  cout << K-m << endl;
}
