#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  ll N,K;
  cin >> N >> K;
  if(K==1){
    cout << "0" << endl;
  }else if(K==2&&!(N%2)){
    cout << "0" << endl;
  }else{
    ll t = N%K;
    if(t<abs(t-K)){
      cout << t << endl;
    }else{
      cout << abs(t-K) << endl;
    }
  }
}
