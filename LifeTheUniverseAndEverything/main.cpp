#include <iostream>

int main() {
    int n = 0;
    scanf("%d", &n);
    while(n != 42){
        printf("%d\n", n);
        scanf("%d", &n);
    }
    return 0;
}