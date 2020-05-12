#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int A,cnt=0;
  vector<int> C(6);
  vector<int> V = {1,5,10,50,100,500};
  rep(i,6){
    cin >> C.at(i);
  }
  cin >> A;
  for(int i=5;i>=0;--i){
    int t = A/V.at(i);
    if(C.at(i)!=0){
      t = min(t,C.at(i));
      cnt += t;
      A -= V.at(i)*t;
    }
  }
  cout << cnt << endl;
}
