#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int i;
  vector<int> v(5);
  rep(j,6){
    cin >> i;
    v.at(i)++;
  }
  if(v.at(1)<=2&&v.at(2)<=2&&v.at(3)<=2&&v.at(4)<=2){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
