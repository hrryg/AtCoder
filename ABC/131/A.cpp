#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int i;
  bool B = true;
  cin >> S;

  for(i=0;i<3;i++){
    if(S.at(i)==S.at(i+1))
    B = false;
  }
  if(B==false)
  cout << "Bad" << endl;
  else
  cout << "Good" << endl;
}
