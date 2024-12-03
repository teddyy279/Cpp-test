#include<bits/stdc++.h>

using namespace std;

int check(string s){
    long long sum = 0;
    int lt = 1;
    for(int i = s.length() - 1; i >= 0; i--){
        sum += (s[i] - '0') * lt;
        lt *= 2;
        sum %= 5;
        lt %= 5;
    }
    return sum % 5 == 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if(check(s)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
