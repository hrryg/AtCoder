#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string S,T;
  cin >> N >> S;
  if(N%2)
  cout << "No" << endl;
  else {
    for(int i = 0; i < N/2; i++){
      T += S.at(i);
    }
    if(S == T + T)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;
  }

}
