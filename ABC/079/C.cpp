#include <bits/stdc++.h>
using namespace std;

int main(){
  int i,j,op;
  string S;
  cin >> S;

  for(i=0;i<pow(2,S.size()-1);++i){
    int result = S.at(0)-'0';
    for(j=0;j<S.size()-1;++j){
      int digit;
      digit = (i >> j) & 1;

      if(digit == 0)
        result -= S.at(j+1)-'0';
      else
        result += S.at(j+1)-'0';
    }
    if(result == 7){
      op = i;
      break;
    }
  }
  cout << S.at(0);
  for(i=0;i<S.size()-1;++i){
    if((op >> i) & 1)
      cout << '+';
    else
      cout << '-';
    cout << S.at(i+1);
  }
  cout << "=7";
}
