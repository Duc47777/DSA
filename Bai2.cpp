#include <bits/stdc++.h>
using namespace std;

struct Point {
    float x;
    float y;

};

void nhap(Point& p) {
    cin >> p.x >> p.y;
}

void Line(Point p1, Point p2, float& a, float& b) {
    a = (p2.y - p1.y) / (p2.x - p1.x);
    b = p1.y - a * p1.x;
};


int main() {
    Point A, B, C, D;
    nhap(A); nhap(B); nhap(C); nhap(D);

    float a1, b1, a2, b2;
    Line(A, B, a1, b1);
    Line(C, D, a2, b2);


    if (a1 != a2) {
        float x = (b2 - b1) / (a1 - a2);
        float y = a1 * x + b1;
        cout << fixed << setprecision(2) << x << " " << y;
        return 0;

    }
    else {
        if (b1 == b2) {
            cout << "Many";
            return 0;
        }
        else {
            cout << "No";
        }
    }

    return 0;
}