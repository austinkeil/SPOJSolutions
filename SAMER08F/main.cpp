#include <bits/stdc++.h>

using namespace std;

static int numSquares(const int& n){
    int sumSquares = 0;
    for(int i = 1; i <= n; i++){
        sumSquares += ((n-i)+1)*((n-i)+1);
    }
    return sumSquares;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while(n != 0){
        cout << numSquares(n) << "\n";
        cin >> n;
    }

}