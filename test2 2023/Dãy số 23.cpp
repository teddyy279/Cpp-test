#include<bits/stdc++.h>

using namespace std;
int mod = 1e9 + 7;
const int maxn = 1e6 + 1;
int n;

long long F[maxn];

long long solve(int n){
    F[1] = F[2] = 1;
    for(int i = 3; i <= n; i++){
        F[i] = 2 * F[i - 1] + 3 * F[i - 2];
        F[i] %= mod;
    }
    return F[n] % mod;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    cout << solve(n);
}
