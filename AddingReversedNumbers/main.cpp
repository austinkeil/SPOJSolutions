#include <iostream>

using namespace std;

unsigned reverse(unsigned x){
    unsigned reversedNumber = 0;
    unsigned remainder;
    while(x){
        remainder = x % 10;
        reversedNumber = reversedNumber*10 + remainder;
        x /= 10;
    }
    return reversedNumber;
}
int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        unsigned x, y;
        cin >> x >> y;
        x = reverse(x);
        y = reverse(y);
        cout << reverse(x + y)<<endl;
    }
    return 0;
}