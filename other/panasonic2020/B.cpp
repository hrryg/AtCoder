#include <bits/stdc++.h>
using namespace std;

int main(){
  long long H,W;
  cin >> H >> W;

  if(H==1||W==1)
    cout << "1";
  else if((H*W)%2)
    cout << (H*W)/2+1;
  else
    cout << (H*W)/2;

}
