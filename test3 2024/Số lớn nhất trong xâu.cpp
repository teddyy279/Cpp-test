#include<bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    if(a.size() != b.size()){
        return a.size() < b.size();
    }
    return a < b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    vector<string> v;
    for(int i = 0; i < s.size(); i++){
        if(!isdigit(s[i])){
            s[i] = ' ';
        }
    }
    long long res = 0;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        while(tmp[0] == '0' && tmp.length() > 1){
            tmp.erase(0, 1);
        }
        v.push_back(tmp);
    } 
    sort(v.begin(), v.end(), cmp);
    cout << v[v.size() - 1];
}
