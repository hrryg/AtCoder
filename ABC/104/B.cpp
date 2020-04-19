#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int ccnt=0;
  bool b = 1;
  cin >> S;
  if(S.at(0)!='A'){
    b = 0;
  }
  for(int i=1;i<S.size();++i){
    if(isupper(S.at(i))){
      if(i==1||i==S.size()-1||S.at(i)!='C'){
        b = 0;
      }
      ++ccnt;
    }
  }
  if(ccnt!=1){
    b = 0;
  }
  if(b){
    cout << "AC" << endl;
  }else{
    cout << "WA" << endl;
  }
}
