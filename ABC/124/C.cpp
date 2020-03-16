#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int cnt = 0;
  for(int i=1;i<S.size();++i){
    if(S.at(i-1)==S.at(i)){
      if(S.at(i)=='0'){
        S.at(i) = '1';
        ++cnt;
      }else{
        S.at(i) = '0';
        ++cnt;
      }
    }
  }
  cout << cnt;
}
