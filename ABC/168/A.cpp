#include <bits/stdc++.h>
using namespace std;

int main(){
    string N;
    cin >> N;
    int n = N.size()-1;
    if(N.at(n)=='3'){
        cout << "bon" << endl;
    }else if(N.at(n)=='0'||N.at(n)=='1'||N.at(n)=='6'||N.at(n)=='8'){
        cout << "pon" << endl;
    }else{
        cout << "hon" << endl;
    }
}