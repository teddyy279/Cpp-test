#include<bits/stdc++.h>

using namespace std;

int n;
char a[1005][1005];
string F[1005][1005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    if(a[1][1] == '0') F[1][1] = "0";
    else F[1][1] = "1";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 && j == 1) continue;
            if(i == 1){
                F[i][j] = F[i][j - 1] + a[i][j];
            }
            else if(j == 1){
                F[i][j] = F[i - 1][j] + a[i][j];
            }
            else{
                F[i][j] = max(F[i][j - 1], F[i - 1][j]) + a[i][j];
            }
        }
    }
    string b = F[n][n];
    while(b.size() > 1 && b[0] == '0') b.erase(0, 1);
    while(b.size() % 4 != 0) b = "0" + b;
    for(int i = 0; i < b.size(); i += 4){
        int x = (b[i] - '0') * 8 + (b[i + 1] - '0') * 4 + (b[i + 2] - '0') * 2 + (b[i + 3] - '0');
        if(x < 10) cout << x;
        else cout << (char)(x + 55);
    }
}
