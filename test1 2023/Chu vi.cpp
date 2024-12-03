#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[105][105], b[105][105];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void loang(int i, int j, int &sum){
    a[i][j] = 0;
    int cnt = 0;
    for(int k = 0; k < 4; k++){
        int i1 = dx[k] + i;
        int j1 = dy[k] + j;
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && b[i1][j1] == 1){
            cnt += 1;
        }
    }
    sum += 4 - cnt;
    for(int k  = 0; k < 4; k++){
        int i1 = dx[k] + i;
        int j1 = dy[k] + j;
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1){
            loang(i1, j1, sum);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1){
                int sum = 0;
                loang(i, j, sum);
                cout << sum << " ";
            }
        }
    }
}
