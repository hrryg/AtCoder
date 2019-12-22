#include <bits/stdc++.h>
using namespace std;

int main(){
  long A,B;
  cin >> A >> B;
  long C=A,D=B;

  do{
    if(A<B){
      A += C;
    }
    else if(A>B){
      B += D;
    }
  }while(A!=B);
  cout << A << endl;
}
