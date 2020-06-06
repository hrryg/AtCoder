#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    string s,t;
    cin >> s >> t;
    if(s==t){
        cout << "same" << endl;
    }else{
        for(int i=0;i<s.size();++i){
            if(isupper(s.at(i))){
                s.at(i) = tolower(s.at(i));
            }
            if(isupper(t.at(i))){
                t.at(i) = tolower(t.at(i));
            }
        }
        if(s==t){
            cout << "case-insensitive" << endl;
        }else{
            cout << "different" << endl;
        }
    }
}