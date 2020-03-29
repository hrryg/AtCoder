#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  if(S.at(2)==S.at(3)&&S.at(4)==S.at(5))
    cout << "Yes";
  else
    cout << "No";
}
