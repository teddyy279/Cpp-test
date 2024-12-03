#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        map<int, int> mp;
        while(ss >> tmp){
            if(tmp == "+"){
                continue;
            }
            int x = tmp[0] - '0';
            int y = tmp[tmp.size() - 1] - '0';
            mp[y] += x;
        }
        int cnt = 0;
        for(auto it : mp){
            cnt++;
            cout << it.second << "x^" << it.first;
            if(cnt != mp.size()){
                cout << " + ";
            }
        }
        cout << endl;   
    }
}
