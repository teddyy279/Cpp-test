#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        pq.push(a[i]);
    }
    long long res = 0;
    while(pq.size() >= 2){
        long long tmp1 = pq.top();
        pq.pop();
        long long tmp2 = pq.top();
        pq.pop();
        res += tmp1 + tmp2;
        pq.push(tmp1 + tmp2);
    }
    cout << res << " " << pq.top();
}
