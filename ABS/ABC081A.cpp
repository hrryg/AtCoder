#include <bits/stdc++.h>
using namespace std;

int main(){
  int sum=0;
  string s;
  cin >> s;
  for(int i=0;i<3;i++){
    if(s.at(i) == '1')
    sum++;
  }
  cout << sum << endl;
}
