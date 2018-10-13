#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cols;
    cin >> cols;
    while(cols != 0){
        string s;
        cin >> s;
        int rows = int(s.length()) / cols;
        vector<string> words;
        int offset = 0;
        for(int i = 0; i < rows; i++) {
            if(i % 2 == 0)
                words.push_back(s.substr(offset, cols));
            else {
                string temp = s.substr(offset, cols);
                reverse(temp.begin(), temp.end());
                words.push_back(temp);
            }
            offset += cols;
        }

        for(int i = 0; i < cols; i++) {
            for (int j = 0; j < rows; j++) {
                cout << words[j][i];
            }
        }
        cout << "\n";

        cin >> cols;
    }
    return 0;
}