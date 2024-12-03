#include<bits/stdc++.h>

using namespace std;

map<string, int> mp;

int calculate(string s, map<string, int> mp){
    string tmp = "";
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(!isdigit(s[i])){
            tmp += s[i];
        }
        else{
            ans += mp[tmp] * (s[i] - '0');
            tmp = "";
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 0; i < 10; i++){
        string element;
        int weight;
        cin >> element >> weight;
        mp[element] = weight;
    }
    int TC; cin >> TC;
    while(TC--){
        string s;
        cin >> s;
        cout << calculate(s, mp) << endl;
    }
}
