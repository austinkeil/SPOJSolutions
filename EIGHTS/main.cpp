#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    cout.precision(20);
    int t, a;
    ll k, b;
    cin >> t;
    string ending, start;
    while(t--){
        cin >> k;
        a = int(k % 4);
        if(a == 1) ending = "192";
        else if(a == 2) ending = "442";
        else if(a == 3) ending = "692";
        else if(a == 0) ending = "942";

        b = (k - 1) / 4;
        if(b == 0) start = "";
        else start = to_string(b);

        cout << start + ending << endl;
    }
}
