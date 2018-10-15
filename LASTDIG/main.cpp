#include <bits/stdc++.h>

using namespace std;
int main() {
    vector < vector <int> > v;
    vector<int> temps;
    for(int i = 0; i < 10; i++){
        temps.clear();
        int lastDigit = i;
        while(temps.size() < 4){
            temps.push_back(lastDigit);
            lastDigit = (lastDigit * i) % 10;
        }
        v.push_back(temps);
    }

    int t, a, rem;
    cin >> t;
    long long b;
    while(t--) {
        cin >> a >> b;
        rem = b % 4;
        if(a == 1 || b == 0)
            cout << 1 << "\n";
        else {
            rem = rem == 0 ? 3: rem -1;
            cout<< v[a % 10][rem] <<"\n";
        }
    }
    return 0;
}