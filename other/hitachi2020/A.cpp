#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  bool b = true;
  cin >> S;
  for(int i=0;i<S.size();i+=2){
    if(S.size()%2==1)
      b=false;
    else if(S.at(i)!='h'||S.at(i+1)!='i')
      b = false;
  }
  if(b)
    cout << "Yes";
  else
    cout << "No";
}
