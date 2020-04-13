#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i,N){
    cin >> A.at(i);
  }
  if(N==K){
    cout << "1" << endl;
  }else if(K==2){
    cout << N-1 << endl;
  }else{
    if((N-1)%(K-1)){
      cout << (N-1)/(K-1)+1 << endl;
    }else{
      cout << (N-1)/(K-1) << endl;
    }
  }
}
