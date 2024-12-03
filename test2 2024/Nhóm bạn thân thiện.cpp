#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int min_ans = 1e9;
    for(int i = k - 1; i < n; i++){
        min_ans = min(min_ans, a[i] - a[i - k + 1]);
    }
    cout << min_ans;
}
