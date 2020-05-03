#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1;i<=n;++i)

int main(){
  int X,ans=0;
  cin >> X;
  rep(i,100){
    int num = 0;
    for(int j=2;j<=100;++j){
      num = pow(i,j);
      if(num<=X){
        ans = max(num,ans);
      }
    }
  }
  cout << ans << endl;
}
