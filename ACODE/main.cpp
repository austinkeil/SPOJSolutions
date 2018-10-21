#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    while (str != "0") {
        int n = int(str.length());
        ll dp[n];
        for(int i = 0; i < n; i++){
            dp[i] = 0;
        }
        dp[0] = 1;

        for(int i = 1; i < n; i++){
            // if 1-27 (inclusive) and no zeros (split-able)
            if(stoi(str.substr(i-1,2)) > 0 && stoi(str.substr(i-1,2)) < 28 && str[i] != '0' && str[i-1] != '0'){
                if(n == 2){
                    dp[i] = 2;
                }
                else if(i < n - 1 && str[i+1] != '0'){
                    if(i == 1) {
                        dp[i] = 2;                      // len == 2, split-able, next not zero
                    }
                    else {
                        dp[i] = dp[i-1] + dp[i-2];      // len > 2, split-able, next not zero
                    }
                } else if (i == n - 1) {
                    dp[i] = dp[i - 1] + dp[i - 2];      // split-able, on the last one
                } else {
                    dp[i] = dp[i - 1];                  // split-able, but the next one is zero
                }
            }
            // can't be split
            else{
                dp[i] = dp[i-1];
            }
        }
        cout << dp[n-1] << endl;
        cin >> str;
    }
    return 0;
}
