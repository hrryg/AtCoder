#include <bits/stdc++.h>
using namespace std;

int main(){
  string a,b;
  cin >> a >> b;
  a += b;
  int c = stoi(a);
  double d = sqrt(c);
  int e = floor(d);
  if(e*e==c){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
