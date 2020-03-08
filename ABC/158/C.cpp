#include <bits/stdc++.h>
using namespace std;

int main(){
  double A,B,i,tax=-1;
  cin >> A >> B;
  for(i=0;i<=1000;++i){
    if(floor(i*0.08)==A&&floor(i*0.1)==B){
      tax = i;
      break;
    }
  }
  cout << tax;
}
