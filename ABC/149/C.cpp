#include <bits/stdc++.h>
using namespace std;

int main(){
  int X;
  bool B = false;
  cin >> X;

  do{
    if(X==2)
    B = true;
    else if(!(X<2)){
      if(!(X%2==0)){
        double sqrtNum = sqrt(X);
        for(int i=3;i<=sqrtNum;i+=2){
          if(X%i==0){
            B = false;
            X++;
            break;
          }else
          B = true;
        }
      }else
      X++;
    }else
    X++;
  }while(B==false);
  cout << X << endl;
}
