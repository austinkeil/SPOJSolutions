#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, half;
    string k, temp, ending;
    cin >> t;

    while(t--) {
        cin >> k;
        int n = int(k.length());
        n % 2 ? half = n / 2 + 1 : half = n / 2; // half is one past midpoint so 3 => 2, 4 => 2

        int i = 0;
        bool LeftAdjustmentNeeded = true;
        int odd;
        n % 2 ? odd = 1 : odd = 0;
        while(half + i < n){
            if (!LeftAdjustmentNeeded || k[half + i] < k[half - i - 1 - odd]) {
                k[half + i] = k[half - i - 1 - odd];
                LeftAdjustmentNeeded = false;
            } else if (k[half + i] > k[half - i - 1 - odd] && LeftAdjustmentNeeded) {
                break;
            }
            i++;
        }

        if(!LeftAdjustmentNeeded)
            cout << k << endl;
        else {
            i = half - 1;
            while (k[i] == '9' && i != -1) {
                k[i] = '0';
                i = i - 1;
            }
            if (i == -1) {
                if(n % 2) {
                    temp = '1' + k.substr(0, half - 1);
                    ending = temp.substr(0, half);
                    reverse(ending.begin(), ending.end());
                } else {
                    temp = '1' + k.substr(0, half);
                    ending = temp.substr(0, half);
                    reverse(ending.begin(), ending.end());
                }
            }
            else {
                k[i] = char(int(k[i]) + 1);
                if(n % 2) {
                    temp = k.substr(0, half);
                    ending = temp.substr(0,half - 1);
                    reverse(ending.begin(), ending.end());
                } else {
                    temp = k.substr(0, half);
                    ending = temp;
                    reverse(ending.begin(), ending.end());
                }
            }
            cout << temp + ending << endl;
        }
    }

}