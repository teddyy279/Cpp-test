#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    map<ll, int> mp;
    mp[0] = 0;
    long long sum = 0;
    int start = 0;
    int res = -1;
    for(int i = 1; i <= n; i++){
        sum += a[i];
        if(mp.count(sum)){
            int distance = i - mp[sum];
            if(distance > res){
                start = mp[sum] + 1;
                res = distance;
            } 
        }
        if(mp.count(sum) == 0){
            mp[sum] = i;
        }
    }
    if(res == -1){
        cout << "NOT FOUND";
        return 0;
    }
    for(int i = start; i < start + res; i++){
        cout << a[i] << " ";
    }
}
