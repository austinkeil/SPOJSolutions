#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long total = 0, x;
        for(int i = 0; i < n; i++){
            cin >> x;
            total += x % n;
            total = total % n;
        }
        if(total % n == 0) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}