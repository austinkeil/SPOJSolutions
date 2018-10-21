#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int fact;
        cin >> fact;
        int x = 5, fives = 0;
        while (x <= fact){
            fives += fact / x;
            x *= 5;
        }
        cout << fives << "\n";
    }
    return 0;
}