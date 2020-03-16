#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M,i,j,ans=-1,num1,num2;
  cin >> N >> M;
  vector<pair<int,char>> sc(M);
  for(i=0;i<M;++i){
    cin >> sc.at(i).first >> sc.at(i).second;
  }
  if(N==1){
    num1 = 0;
    num2 = 10;
  }else if(N==2){
    num1 = 10;
    num2 = 100;
  }else{
    num1 = 100;
    num2 = 1000;
  }
  for(i=num1;i<num2;++i){
    string s = to_string(i);
    bool b = true;
    for(j=0;j<M;++j){
      if(s.at(sc.at(j).first-1)!=sc.at(j).second){
        b = false;
        break;
      }
    }
    if(b){
      ans = i;
      break;
    }
  }
  cout << ans;
}
