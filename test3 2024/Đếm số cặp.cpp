#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long res = 0;
    for(int i = 0; i < v.size(); i++){
        auto pos1 = lower_bound(v.begin() + i + 1, v.end(), k + v[i]);
        auto pos2 = upper_bound(v.begin() + i + 1, v.end(), k + v[i]);
        res += pos2 - pos1;
    }
    cout << res;
}
