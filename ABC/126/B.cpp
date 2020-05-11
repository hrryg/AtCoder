#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  string a,b;
  a.push_back(S.at(0)); a.push_back(S.at(1));
  b.push_back(S.at(2)); b.push_back(S.at(3));
  int x = stoi(a);
  int y = stoi(b);
  if(0<x&&x<13&&0<y&&y<13){
    cout << "AMBIGUOUS" << endl;
  }else if(0<x&&x<13&&0<=y&&y<100){
    cout << "MMYY" << endl;
  }else if(0<=x&&x<100&&0<y&&y<13){
    cout << "YYMM" << endl;
  }else{
    cout << "NA" << endl;
  }
}
