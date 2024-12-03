#include<bits/stdc++.h>

using namespace std;


map<long long, int> mp;
int max_ans = 1;

void solve(long long n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int cnt = 0;
            while(n % i == 0){
                cnt += 1;
                n /= i;
            }
            mp[i] = cnt;
            max_ans = max(cnt, max_ans);
        }
    }
    if(n != 1){
        mp[n] = 1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    solve(n);
    for(auto it : mp){
        if(it.second == max_ans){
            cout << it.first << " " << it.second;
            break;
        }
    }
}
