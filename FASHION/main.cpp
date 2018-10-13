#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> men(n), women(n);
        int temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
            men.push_back(temp);
        }
        for(int i = 0; i < n; i++){
            cin >> temp;
            women.push_back(temp);
        }
        sort(men.begin(), men.end());
        sort(women.begin(), women.end());
        cout<<inner_product(men.begin(), men.end(), women.begin(), 0)<<"\n";

    }
    return 0;
}