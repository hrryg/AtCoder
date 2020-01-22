#include <bits/stdc++.h>
using namespace std;

int main(){
  double N,i,j,m=0,d;
  cin >> N;
  vector<pair<double,double>> P(N);

  for(i=0;i<N;i++)
  cin >> P.at(i).first >> P.at(i).second;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(i==j)
      break;
      else{
        d = sqrt(pow((P.at(j).first-P.at(i).first),2)+pow((P.at(j).second-P.at(i).second),2));
      }
      m = max(m,d);
    }
  }
  cout << m;
}
