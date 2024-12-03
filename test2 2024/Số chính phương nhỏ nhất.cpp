#include<bits/stdc++.h>
using namespace std;

long long xuli(int n){
    long long res = 1; 
    int tmp = n;
    for(int i = 2; i <= sqrt(tmp); i++){
        while(n % (i*i) == 0){
            res *= (i*i);
            n /= i*i;
        }
    }
    res *= (long long)n*n;
    return res;
} 

int main(){
    int n;
    cin >> n;
    cout << xuli(n);
}
