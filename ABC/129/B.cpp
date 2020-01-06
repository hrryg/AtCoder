#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,j,S1=0,S2=0,dif;
  cin >> N;
  vector<int> W(N);

  for(i=0;i<N;i++)
  cin >> W.at(i);

  for(i=0;i<N;i++){
    S1=0;
    S2=0;
    for(j=0;j<N;j++){
      if(j<=i)
      S1 += W.at(j);
      else
      S2 += W.at(j);
    }
    if(i==0){
      if(S1<=S2)
      dif = S2 - S1;
      else
      dif = S1 - S2;
    }else{
      if(S1<=S2)
      dif = min(dif,S2-S1);
      else
      dif = min(dif,S1-S2);
    }
  }
  cout << dif << endl;
}
