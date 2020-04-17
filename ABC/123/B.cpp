#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  vector<int> v(5),v2(5),v3(5);
  rep(i,5){
    cin >> v.at(i);
    if(v.at(i)%10){
      v2.at(i) = (v.at(i)/10+1)*10;
    }else{
      v2.at(i) = v.at(i);
    }
  }
  rep(i,5){
    v3.at(i) = v2.at(i) - v.at(i);
  }
  sort(v3.begin(),v3.end());
  int sum = 0;
  rep(i,5){
    sum += v2.at(i);
  }
  cout << sum - v3.at(4) << endl;
}
