#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d;
    cin >> n >> d;
    long long res = 0;
    vector<long long> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 1; i < n; i++){
        if(v[i] <= v[i - 1]){
            long long x = (v[i - 1] - v[i]) / d + 1;
            res += x;
            v[i] = v[i] + x * d;
        }
    }
    cout << res;
}
