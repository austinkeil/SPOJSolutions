#include <bits/stdc++.h>

typedef long long       ll;

// Testing naive modular exponentiation approach to LASTDIG
// RESULT: Correct output, but time limit exceeded
int modExp(int base, ll exp, int mod){
    if(mod == 1) return 0;
    int c = 1;
    for (int e_prime = 0; e_prime < exp; e_prime++)
         c = (c * base) % mod;
    return c;
}

using namespace std;
int main() {
    int t;
    cin >> t;
    int a;
    ll b;
    while(t--) {
        cin >> a >> b;
        cout << modExp(a % 10, b, 10) << "\n";
    }
}