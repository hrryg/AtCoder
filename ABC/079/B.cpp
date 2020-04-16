#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll N,x,y;
  cin >> N;
  if(N==1){
    cout << "1" << endl;
  }else{
    ll num,x=2,y=1;
    for(ll i=2;i<=N;++i){
      num = x + y;
      x = y;
      y = num;
    }
    cout << num << endl;
  }
}
