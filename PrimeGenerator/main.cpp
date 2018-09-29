#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int SIZE = sqrt(1000000001);
    vector<bool> primeBits(SIZE, true);

    vector<int> *primes = new vector<int>;
    primeBits[0] = primeBits[1] = false;
    for(int i = 2; i < SIZE; ++i){
        if(primeBits[i]){
            primes->push_back(i);
            for(int j = i * i; j < SIZE; j += i){
                primeBits[j] = false;
            }
        }
    }

    int t, m, n;
    cin >> t;

    for(int i = 0; i < t; ++i){
        cin >> m >> n;
        vector<int>::iterator p;

        for(int j = m; j <= n; ++j){
            if(j % 6 != 1 || j % 6 != 5) {
                bool thisPrime = true;
                for (p = primes->begin(); *p < j && p != primes->end(); ++p) {
                    if (j % *p == 0) {
                        thisPrime = false;
                        break;
                    }
                }
                if (thisPrime && j > 1) {
                    cout<<j<<"\n";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}