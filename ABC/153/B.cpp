#include <bits/stdc++.h>
using namespace std;

int main(){
  int H,N,i,A,B=0;
  cin >> H >> N;
  for(i=0;i<N;i++){
    cin >> A;
    B+=A;
  }
  if(H<=B)
  cout << "Yes";
  else
  cout << "No";
}
