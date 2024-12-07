#include<bits/stdc++.h>

using namespace std;

int solve(int n, int k){
    if(n < 2){
        return 0;
    }
    int mu = 0;
    int ans = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                mu++;
                n /= i;
                if(mu == k){
                    ans = i;
                    break;
                }
            }
        }
    }
    if(n > 1 && mu == k - 1){
        ans = n;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    if(solve(n, k)){
        cout << solve(n, k);
    }
    else cout << -1;
}
