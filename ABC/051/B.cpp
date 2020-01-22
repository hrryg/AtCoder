#include <bits/stdc++.h>
using namespace std;

int main(){
  int K,S,i,j,k,cnt=0;
  cin >> K >> S;

  for(i=0;i<=K;i++){
    for(j=0;j<=K;j++){
      if(i+j<=S){
        if(S-j-i<=K)
        cnt++;
      }
    }
  }
  cout << cnt;
}
