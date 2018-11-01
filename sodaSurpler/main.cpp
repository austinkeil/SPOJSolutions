#include <bits/>

using namespace std;

int main() {
    int e, f, c;
    cin >> e >> f >> c;
    int empty = e + f;
    int full = 0, drunk = 0;
    while (empty >= c){
        full = empty / c;
        drunk += full;
        empty = empty % c + full;
    }
    cout << drunk;
    return 0;
}