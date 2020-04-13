#include <bits/stdc++.h>
using namespace std;

int main(){
  double N,X=1;
  bool b = 1;
  cin >> N;
  while(b){
    if(floor(X*1.08)==N){
      b = 0;
    }else if(X==N){
      break;
    }else{
      ++X;
    }
  }
  if(b){
    cout << ":(" << endl;
  }else{
    cout << X << endl;
  }
}
