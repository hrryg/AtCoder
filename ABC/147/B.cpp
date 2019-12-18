#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int i,cnt=0;
  cin >> S;

  for(i=0;i<S.size()/2;i++)
  if(S.at(i)!=S.at(S.size()-1-i))
  cnt++;

  cout << cnt << endl;

}
