#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,M,X,under=0,upper=0;;
  cin >> N >> M >> X;
  rep(i,M){
    int a;
    cin >> a;
    if(a<X){
      ++under;
    }else{
      ++upper;
    }
  }
  cout << min(under,upper) << endl;
}
