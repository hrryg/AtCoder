#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,j,pt=0;
  string X;
  cin >> N;
  vector<pair<string,int>> pl(N);

  for(i=0;i<N;i++){
    cin >> pl.at(i).first >> pl.at(i).second;
  }
  cin >> X;
  if(N==1)
  cout << pt << endl;
  else{
    for(i=0;i<N;i++){
      if(pl.at(i).first==X){
        for(j=i+1;j<N;j++)
        pt += pl.at(j).second;
      }
    }
    cout << pt << endl;
  }
}
