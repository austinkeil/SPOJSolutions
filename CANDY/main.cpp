#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (true){
        cin >> n;
        if(n == -1)
            break;
        vector<int> v;
        int c, sum = 0, count = 0;
        while(n--) {
            cin >> c;
            v.push_back(c);
            sum += c;
            count += 1;
        }

        if(sum % count != 0){
            cout << "-1\n";
            continue;
        }

        int average = sum / count;
        int diff = 0;
        int oneSide = 0;

        vector<int>::iterator it;
        for(it = v.begin(); it != v.end(); it++){
            int currentDiff = average - *it;
            diff += currentDiff;
            if(currentDiff > 0){
                oneSide += currentDiff;
            }
        }
        if(diff == 0){
            cout<<oneSide<<"\n";
        } else {
            cout<<"-1\n";
        }
    }

}