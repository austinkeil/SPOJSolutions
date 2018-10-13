#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z, d, r;
    cin >> x >> y >> z;
    while(!(x == 0 && y == 0 && z == 0)){
        d = y - x;
        if(d == (z - y)){
            cout << "AP " << z + d << "\n";
        } else {
            r = z / y;
            cout << "GP " << z * r << "\n";
        }
        cin >> x >> y >> z;
    }
    return 0;
}