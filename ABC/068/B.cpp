#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  cin >> N;
  if(N>63){
    cout << "64" << endl;
  }else if(N>31){
    cout << "32" << endl;
  }else if(N>15){
    cout << "16" << endl;
  }else if(N>7){
    cout << "8" << endl;
  }else if(N>3){
    cout << "4" << endl;
  }else if(N>1){
    cout << "2" << endl;
  }else{
    cout << "1" << endl;
  }
}
