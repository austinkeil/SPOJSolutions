#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string a, trash, b, c;
    int answer;
    while(t--){
        cin >> a >> trash >> b >> trash >> c;
        if(a.find("machula") != string::npos){
            answer = stoi(c) - stoi(b);
            cout << answer << " + " << b << " = " << c << endl;
        }
        else if(b.find("machula") != string::npos){
            answer = stoi(c) - stoi(a);
            cout << a << " + " << answer << " = " << c << endl;
        }
        else if(c.find("machula") != string::npos){
            cout << a << " + " << b << " = " << stoi(a) + stoi(b) << endl;
        }
    }
}