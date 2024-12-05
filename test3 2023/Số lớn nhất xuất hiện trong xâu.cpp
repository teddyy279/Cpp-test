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
    s += "a";
    vector<string> v;
    string tmp = "";
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            tmp += s[i];
        }
        else{
            while(tmp.size() > 1 && tmp[0] == '0') tmp.erase(0, 1);
            if(tmp != "") v.push_back(tmp);
            tmp = "";
        }
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[v.size() - 1];
}
