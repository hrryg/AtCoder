#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    int n;
    cin >> n;
    if(n<=104){
        cout << "0";
    }else if(105<=n&&n<=134){
        cout << "1";
    }else if(135<=n&&n<=164){
        cout << "2";
    }else if(165<=n&&n<=188){
        cout << "3";
    }else if(189<=n&&n<=194){
        cout << "4";
    }else if(195<=n&&n<=200){
        cout << "5";
    }
}