#include<bits/stdc++.h>

using namespace std;
int n, m;
int F[1005][1005];
int a[1005][1005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    memset(F, 0, sizeof(F));
    F[1][1] = a[1][1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == 1 && j == 1) continue;
            if(i == 1){
                F[i][j] = F[i][j - 1] + a[i][j];
            }
            else if(j == 1){
                F[i][j] = F[i - 1][j] + a[i][j];
            }
            else{
                F[i][j] = max({F[i - 1][j - 1], F[i - 1][j], F[i][j - 1]}) + a[i][j];
            }
        }
    }
    cout << F[n][m];
}
