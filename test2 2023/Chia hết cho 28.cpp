#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n);
    map<int, long long> mp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        v[i] %= 28;
        mp[v[i]]++;
    }
    long long ans = 0;
    ans += mp[0] * (mp[0] - 1) / 2;
    for(int i = 1; i <= 13; i++){
        ans += mp[i] * mp[28 - i];
    }
    ans += mp[14] * (mp[14] - 1) / 2;
    cout << ans;
}
