#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double c, length;
    cin >> c;
    int cards;
    while(c >= 0.0001){
        length = 1/2.0;
        cards = 1;
        while (length < c){
            length += 1.0/(2 + cards);
            cards += 1;
        }
        cout << cards << " card(s)\n";
        cin >> c;
    }
}