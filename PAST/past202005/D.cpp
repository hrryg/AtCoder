#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;
vector<vector<char>> n0 = {
    {'#','#','#'},
    {'#','.','#'},
    {'#','.','#'},
    {'#','.','#'},
    {'#','#','#'},
};
vector<vector<char>> n1 = {
    {'.','#','.'},
    {'#','#','.'},
    {'.','#','.'},
    {'.','#','.'},
    {'#','#','#'},
};
vector<vector<char>> n2 = {
    {'#','#','#'},
    {'.','.','#'},
    {'#','#','#'},
    {'#','.','.'},
    {'#','#','#'},
};
vector<vector<char>> n3 = {
    {'#','#','#'},
    {'.','.','#'},
    {'#','#','#'},
    {'.','.','#'},
    {'#','#','#'},
};
vector<vector<char>> n4 = {
    {'#','.','#'},
    {'#','.','#'},
    {'#','#','#'},
    {'.','.','#'},
    {'.','.','#'},
};
vector<vector<char>> n5 = {
    {'#','#','#'},
    {'#','.','.'},
    {'#','#','#'},
    {'.','.','#'},
    {'#','#','#'},
};
vector<vector<char>> n6 = {
    {'#','#','#'},
    {'#','.','.'},
    {'#','#','#'},
    {'#','.','#'},
    {'#','#','#'},
};
vector<vector<char>> n7 = {
    {'#','#','#'},
    {'.','.','#'},
    {'.','.','#'},
    {'.','.','#'},
    {'.','.','#'},
};
vector<vector<char>> n8 = {
    {'#','#','#'},
    {'#','.','#'},
    {'#','#','#'},
    {'#','.','#'},
    {'#','#','#'},
};
vector<vector<char>> n9 = {
    {'#','#','#'},
    {'#','.','#'},
    {'#','#','#'},
    {'.','.','#'},
    {'#','#','#'},
};

int main(){
    int N;
    cin >> N;
    vector<vector<char>> s(5,vector<char>(4*N+1));
    rep(i,5){
        rep(j,4*N+1){
            cin >> s.at(i).at(j);
        }
    }for(int i=1;i<4*N+1;i+=4){
        int x=0;
        vector<vector<char>> c(5,vector<char>(3,0));   
        for(int j=0;j<5;++j){
            int y=0;
            for(int k=i;k<i+3;++k){
                c.at(x).at(y) = s.at(j).at(k);
                ++y;
            }
            ++x;
        }
        if(c==n0){
            cout << "0";
        }else if(c==n1){
            cout << "1";
        }else if(c==n2){
            cout << "2";
        }else if(c==n3){
            cout << "3";
        }else if(c==n4){
            cout << "4";
        }else if(c==n5){
            cout << "5";
        }else if(c==n6){
            cout << "6";
        }else if(c==n7){
            cout << "7";
        }else if(c==n8){
            cout << "8";
        }else if(c==n9){
            cout << "9";
        }
    }
}