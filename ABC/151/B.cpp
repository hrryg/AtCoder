#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K,M,i,test,A,sum=0;
  cin >> N >> K >> M;


  for(i=0;i<N-1;i++){
    cin >> A;
    sum += A;
  }

  test = N*M-sum;

  if(test<=0)
  cout << "0" << endl;
  else if(test>K)
  cout << "-1" << endl;
  else
  cout << test << endl;
}
