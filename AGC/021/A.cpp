#include <bits/stdc++.h>
using namespace std;

int main(){
  string N;
  bool b = 1;
  cin >> N;
  int K = N.size();
  int c = N.at(0)-'0';
  for(int i=1;i<N.size();++i){
    if(N.at(i)!='9'){
      b=0;
      break;
    }
  }
  if(b){
    cout << c + 9*(K-1) << endl;
  }else{
    cout << c + 9*(K-1)-1 << endl;
  }
}
