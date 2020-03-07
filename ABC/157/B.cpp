#include <bits/stdc++.h>
using namespace std;

int main(){
  int i,j,k,b,N;
  vector<vector<int>> A(3, vector<int>(3));

  for(i=0;i<3;++i){
    for(j=0;j<3;++j){
      cin >> A.at(i).at(j);
    }
  }
  cin >> N;
  for(i=0;i<N;++i){
    cin >> b;
    for(j=0;j<3;++j){
      for(k=0;k<3;++k){
        if(A.at(j).at(k)==b)
          A.at(j).at(k) = 0;
      }
    }
  }
  if(A.at(0).at(0)==0&&A.at(0).at(1)==0&&A.at(0).at(2)==0){
    cout << "Yes";
  }else if(A.at(1).at(0)==0&&A.at(1).at(1)==0&&A.at(1).at(2)==0){
    cout << "Yes";
  }else if(A.at(2).at(0)==0&&A.at(2).at(1)==0&&A.at(2).at(2)==0){
    cout << "Yes";
  }else if(A.at(0).at(0)==0&&A.at(1).at(0)==0&&A.at(2).at(0)==0){
    cout << "Yes";
  }else if(A.at(0).at(1)==0&&A.at(1).at(1)==0&&A.at(2).at(1)==0){
    cout << "Yes";
  }else if(A.at(0).at(2)==0&&A.at(1).at(2)==0&&A.at(2).at(2)==0){
    cout << "Yes";
  }else if(A.at(0).at(0)==0&&A.at(1).at(1)==0&&A.at(2).at(2)==0){
    cout << "Yes";
  }else if(A.at(0).at(2)==0&&A.at(1).at(1)==0&&A.at(2).at(0)==0){
    cout << "Yes";
  }else
    cout << "No";
}
