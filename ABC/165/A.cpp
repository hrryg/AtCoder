#include <bits/stdc++.h>
using namespace std;

int main(){
  int K,A,B;
  bool b = 0;
  cin >> K >> A >> B;

  for(int i=A;i<=B;++i){
    if(i%K==0){
      b = 1;
      break;
    }
  }
  if(b){
    cout << "OK" << endl;
  }else{
    cout << "NG" << endl;
  }
}
