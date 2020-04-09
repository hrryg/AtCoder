#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  double x,money=0;
  string y;
  cin >> N;
  vector<pair<double, string>> v(N);
  rep(i,N){
    cin >> x >> y;
    if(y=="JPY"){
      money += x;
    }else{
      money += x * 380000;
    }
  }
  cout << money << endl;
}
