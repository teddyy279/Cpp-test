#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1][n + 1];
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(mp[a[i][j]] == i - 1){
                mp[a[i][j]]++;
            }
        }
    }
    bool check = false;
    for(auto it : mp){
        if(it.second == n){
            cout << it.first << " ";
            check = true;
        }
    }
    if(!check) cout << "NOT FOUND";
}
