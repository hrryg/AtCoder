#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  string S;
  bool b=1;
  char c;
  ll K;
  cin >> S >> K;
  for(int i=0;i<K;++i){
    if(S.at(i)!='1'){
      c = S.at(i);
      b=0; break;
    }
  }
  if(b){
    cout << '1' << endl;
  }else{
    cout << c << endl;
  }
}
