#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; 
    cin >> n >> k;
    int a[n];
    for (int& x : a) cin >> x;
    sort(a, a + n);
    long long res = 0;
    for (int i = 0; i < n; i++) {
        auto pos = lower_bound(a + i + 1, a + n, k - a[i]);
        res += pos - (a + i + 1);
    }
    cout << res;
}
