#include <bits/stdc++.h>
using namespace std;
const long long int F = 1e9+7;
typedef long long int ll;

int main(){
  ll N;
  ll P=1;
  cin >> N;
  for(ll i=1;i<=N;++i){
    P = i*P%F;
  }
  cout << P << endl;
}
