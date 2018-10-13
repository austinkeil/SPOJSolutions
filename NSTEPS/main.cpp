#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<pair<int, int>, int > numbers;
    int MAX_SIZE = 10000;

    int x = 0, y = 0;
    numbers[make_pair(0, 0)], 0;
    int alternator = 1;
    for(int i = 1; i <= MAX_SIZE; i += 2){
        x += 1;
        y += 1;
        numbers[make_pair(x, y)] = i;
        x += alternator;
        y -= alternator;
        numbers[make_pair(x, y)] = i + 1;
        alternator *= -1;
    }

//    map< pair<int, int>, int>::iterator it;
//    for( it = numbers.begin(); it != numbers.end(); it++){
//        cout << it->second << ": (" << it->first.first << ", " << it->first.second <<")\n";
//    }

    int n;
    cin >> n;
    while(n--){
        cin >> x >> y;
        pair<int, int> curPair = make_pair(x, y);
        if(numbers.count(curPair))
            cout << numbers[curPair] << "\n";
        else
            cout << "No Number\n";
    }
    return 0;
}