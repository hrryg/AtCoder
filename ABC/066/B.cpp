#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    string S;
    cin >> S;
    while(true){
        int t = S.size()-2;
        S = S.erase(t);
        t = S.size()/2;
        string T = S.substr(t);
        string C = S.substr(0,t);
        if(T==C){
            cout << S.size() << endl;
            return 0;
        }
    }
}