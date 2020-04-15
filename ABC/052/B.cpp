#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,num=0,x=0;
  string S;
  cin >> N >> S;
  for(int i=0;i<N;++i){
    if(S.at(i)=='I'){
      ++x;
    }else{
      --x;
    }
    num = max(num,x);
  }
  cout << num <<endl;
}
