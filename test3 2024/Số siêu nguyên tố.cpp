#include <bits/stdc++.h>

using namespace std;

const int maxn = 1000006;
int prime[maxn + 1];

void sieve() {
    fill(prime, prime + maxn + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= maxn; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= maxn; j += i) {
                prime[j] = 0;
            }
        }
    }
}

bool check(int n) {
    if(n < 2){
        return false;
    }
    while (n != 0) {
        if (!prime[n]) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int tmp = 0;
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (check(i)) {
            tmp = 1;
            cout << i << " ";
        }
    }
    if (tmp == 0) {
        cout << "28tech";
    }
}
