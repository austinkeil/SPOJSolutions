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
            // 21031
            // 2

            // 2,1
            // 21, not alllowed

            // 2,10

            // 2, 10, 3
            if((str[i-1]-'0' > 0 && str[i-1]-'0' <= 2) && (str[i] - '0' > 0 && str[i] - '0' <= 7)){
                if(i < n - 1 && str[i+1] != '0'){
                    if(i == 1) {
                        dp[i] = dp[i-1] + 1;
                    }
                    else {
                        dp[i] = dp[i-1] + dp[i-2];
                    }
                } else
                    dp[i] = dp[i-1];
            }
            else{
                dp[i] = dp[i-1];
            }
        }
        cout << dp[n-1] << endl;
        cin >> str;
    }
    return 0;
}
