#include <bits/stdc++.h>
using namespace std;

int main(){
  long i,j,sum=0;
  string S;
  cin >> S;

  for(i=0;i<pow(2,S.size()-1);++i){
    long x = S.at(0)-'0',result=0;

    for(j=0;j<S.size()-1;++j){
      int digit;
      digit = (i >> j) & 1;

      if(digit == 0)
        x = x * 10 + (S.at(j+1)-'0');
      else{
        result += x;
        x = S.at(j+1)-'0';
      }
    }
    sum += result + x;
  }
  cout << sum << endl;
}
