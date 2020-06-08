#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    int N;
    cin >> N;
    if(N%2){
        cout << N*2;
    }else{
        cout << N;
    }
}