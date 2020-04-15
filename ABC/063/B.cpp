#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  bool b=1;
  cin >> S;
  sort(S.begin(),S.end());
  for(int i=0;i<S.size()-1;++i){
    if(S.at(i)==S.at(i+1)){
      b=0; break;
    }
  }
  if(b){
    cout << "yes" << endl;
  }else{
    cout << "no" << endl;
  }
}
