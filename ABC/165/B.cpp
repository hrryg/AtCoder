#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  ll X,m=100,cnt=0;
  cin >> X;
  while(m<X){
    m += m/100;
    ++cnt;
  }
  cout << cnt << endl;
}
