#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int len = s.length();
    string daoNguoc;
    for (int i = len; i >= 0; i--) {
        daoNguoc += s[i];
    }
    cout << daoNguoc;
    return 0;
}
