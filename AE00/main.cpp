#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long total = n;
    int i = 2;
    while(i * i <= n){
        int temp = n - (i * i);
        total += temp / i + 1;
        i += 1;
    }
    cout << total;
    return 0;
}