#include <bits/stdc++.h>
using namespace std;

int main(){
  double N,i,sum=0,h=0;
  cin >> N;
  vector<double> X(N);
  for(i=0;i<N;i++)
  cin >> X.at(i);

  for(i=0;i<N;i++)
  sum += X.at(i);

  sum = round(sum/N);

  for(i=0;i<N;i++){
    h += pow(X.at(i)-sum,2);
  }
  cout << h;
}
