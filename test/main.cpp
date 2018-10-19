#include <bits/stdc++.h>
using namespace std;
typedef vector< int > vi;
typedef long long ll;

ll static countWays(string s){
    if(s.length() == 1){
        return 1;
    }
    else if(s.length() == 2){
        if(stoi(s) <= 27 && s[1] != '0' && s[0] != '0') {
            return 2;
        }
        else {
            return 1;
        }
    } else {
        if(stoi(s.substr(0,2)) <= 27 && s[1] != '0' && s[0] != '0'){
            return countWays(s.substr(2)) + countWays(s.substr(1));
        }
        else {
            return countWays(s.substr(1));
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    while(str != "0") {
        cout << countWays(str) << endl;
        cin >> str;
    }
    return 0;
}