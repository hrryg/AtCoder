#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i;
  bool B = true;
  cin >>N;
  vector<int> A(N);

  for(i=0;i<N;i++)
  cin >> A.at(i);

  for(i=0;i<N;i++){
    if(A.at(i)%2 == 0){
      if(A.at(i)%3!=0&&A.at(i)%5!=0){
        B = false;
        break;
      }
    }
  }
  if(B)
  cout << "APPROVED";
  else
  cout << "DENIED";
}
