#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000006;
const int MOD = 1e9 + 7;

int prime[MAXN];
int cnt[MAXN];

void sieve() {
    for (int i = 0; i < MAXN; i++) {
        prime[i] = i;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < MAXN; i++) {
        if (prime[i] == i) {
            for (int j = i * i; j < MAXN; j += i) {
                if (prime[j] == j) {
                    prime[j] = i;
                }
            }
        }
    }
}

void pt(int n) {
    while (n > 1) {
        int d = prime[n];
        while (n % d == 0) {
            cnt[d]++;
            n /= d;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    memset(cnt, 0, sizeof(cnt));
    sieve();

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pt(a[i]);
    }

    long long ans = 1;
    for (int i = 2; i < MAXN; i++) {
        if (cnt[i] > 0) {
            ans = (ans * (cnt[i] + 1)) % MOD;
        }
    }

    cout << ans << "\n";
    return 0;
}
