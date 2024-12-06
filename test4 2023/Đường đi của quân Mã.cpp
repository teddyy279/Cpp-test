#include<bits/stdc++.h>

using namespace std;

int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};
int a[1005][1005];
int n;

void flood_fill(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 1){
            flood_fill(i1, j1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    int s, t, u, v; cin >> s >> t >> u >> v;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    if(a[u - 1][v - 1] == 0){
        cout << "NO";
        return 0;
    }
    flood_fill(s - 1, t - 1);
    if(a[u - 1][v - 1] == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
