#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    multiset<int> customer;
    vector<int> ticket(m);

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        customer.insert(x);
    }
    for (int i = 0; i < m; i++) {
        cin >> ticket[i];
    }
    for (int i = 0; i < m; i++) {
        auto it = customer.upper_bound(ticket[i]);
        if (it != customer.begin()) {
            --it; 
            cout << *it << endl;
            customer.erase(it);  
        } else {
            cout << "-1" << endl; 
        }
    }

    return 0;
}
