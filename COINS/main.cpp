#include <bits/stdc++.h>

using namespace std;

map<int, long long> maxCoinValues = {{0, 0}};

long long calcMaxValue(int n){
    if(maxCoinValues.count(n))
        return maxCoinValues[n];
    long long maxOfComponents = calcMaxValue(n/2) + calcMaxValue(n/3) + calcMaxValue(n/4);
    if(maxOfComponents > n) {
        maxCoinValues[n] = maxOfComponents;
        return maxOfComponents;
    } else {
        maxCoinValues[n] = n;
        return n;
    }
}

int main() {
    int n;
    while(cin >> n)
        cout << calcMaxValue(n) << "\n";
    return 0;
}