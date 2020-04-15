#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B;
  bool b = 1,c = 0;
  string S;
  cin >> A >> B >> S;
  for(int i=0;i<S.size();++i){
    if(i!=A&&S.at(i)=='-'){
      b = 0; break;
    }
    if(i==A&&S.at(i)=='-'){
      c = 1;
    }
  }
  if(b&&c){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
