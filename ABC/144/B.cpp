#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  bool B;
  cin >> N;

  for(int i = 1; i <= 9; i++){
    for(int j = 1; j <= 9; j++){
      if(N == i * j){
        B = true;
        break;
      }
      else
      B = false;
    }
    if(B)
    break;
  }
  if(B)
  cout << "Yes" << endl;
  else
  cout << "No" << endl;
}
