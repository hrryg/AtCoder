#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int N;
  bool dance = true;
  cin >> S;
  N = S.size();
  for(int i = 0; i < N; i++){
    if(i%2){
      if(S.at(i) == 'R'){
        dance = false;
        break;
      }
    }
    if(!(i%2)){
      if(S.at(i) == 'L'){
        dance = false;
        break;
      }
    }
  }
  if(dance == true)
  cout << "Yes" << endl;
  else if(dance == false)
  cout << "No" << endl;
}
