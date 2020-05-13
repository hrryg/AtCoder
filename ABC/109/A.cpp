#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a*b%2||a*b*3%2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}