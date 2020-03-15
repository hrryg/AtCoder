#include <bits/stdc++.h>
using namespace std;

int main(){
  string S,D;
  int Q,i;
  bool b = true;
  cin >> S >> Q;
  for(i=0;i<Q;++i){
    int que = 0;
    cin >> que;
    if(que==1)
      if(b)
        b = false;
      else
        b = true;
    else{
      int F = 0;
      char C;
      cin >> F >> C;
      if(F==1){
        if(b){
          D.push_back(C);
        }else{
          S.push_back(C);
        }
      }else{
        if(b)
          S.push_back(C);
        else{
          D.push_back(C);
        }
      }
    }
  }
  if(!b){
    reverse(S.begin(),S.end());
    cout << S << D;
  }else{
    reverse(D.begin(),D.end());
    cout << D << S;
  }



}
