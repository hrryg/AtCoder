#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,i,j,k,t=0;
  cin >> n;
  vector<int> stick(n);
  for(i=0;i<n;++i)
    cin >> stick.at(i);

  for(i=0;i<n;++i){
    for(j=i+1;j<n;++j){
      for(k=j+1;k<n;++k){
        int len = stick.at(i) + stick.at(j) + stick.at(k);
        int ma = max(stick.at(i),max(stick.at(j),stick.at(k)));
        int dif = len - ma;
        if(ma < dif)
          t = max(t,len);
      }
    }
  }
  cout << t;
}
