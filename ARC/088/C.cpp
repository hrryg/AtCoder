#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll X,Y;
  cin >> X >> Y;
  ll cnt=0;
  for(ll i=X;i<=Y;i*=2){
    ++cnt;
  }
  cout << cnt << endl;
}
