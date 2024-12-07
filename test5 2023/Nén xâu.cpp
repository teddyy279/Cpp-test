#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    s += '%';
    int cnt = 1;
    char tmp = s[0];
    for(int i = 1; i < s.length(); i++){
        if(s[i] != s[i - 1]){
            cout << tmp;
            cout << cnt;
            tmp = s[i];
            cnt = 1;
        }
        else{
            cnt++;
        }
    }
}
