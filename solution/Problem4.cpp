#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a[21];
    a[0] = "{}";
    for(int i = 1; i <= 20; i++){
        string tmp = "";
        for(int j = 0; j < i; j++){
            tmp += a[j] + ",";
        }
        tmp.pop_back();
        a[i] = "{" + tmp + "}";
    }
    int TC; cin >> TC;
    while(TC--){
        char c;
        int x, y; cin >> x >> c >> y;
        cout << a[x] << "+" << a[y] << "=" << a[x + y] << endl;
    }
}
