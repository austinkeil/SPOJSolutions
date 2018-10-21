#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, half;
    string k, ending;
    cin >> t;

    // The 9 case is not covered, rewritten in PALIN2
    while(t--) {
        cin >> k;
        int n = int(k.length());
        n % 2 ? half = n / 2 + 1 : half = n / 2;
        k[half -1] = char(int(k[half-1]) + 1);
        n % 2 ? ending = k.substr(0, half - 1) : ending = k.substr(0, half);
        k.replace(half, n - 1, ending);
        cout << k << endl;
    }

}