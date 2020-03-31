#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  if(K==1){
    cout << "YES" << endl;
  }else if(N<=K){
    cout << "NO" << endl;
  }else if(N%2 && N/2+1 >=K){
    cout << "YES" << endl;
  }else if(!(N%2) && N/2 >= K){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
