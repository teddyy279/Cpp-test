#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    long long x = pow(10, k);
    long long ans = 1;
    for(int i = 1; i <= m; i++){
        ans *= n;
        ans %= x;
    }
    cout << ans;
}
