#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int m = a;
    int n = b;
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    cout << a;

    return 0;
}
